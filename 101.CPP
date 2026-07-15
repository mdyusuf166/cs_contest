//https://www.codechef.com/START247B/problems/CONVEYOR

#include<bits/stdc++.h>
using namespace std;
void res(){
  int n,p;
  cin>>n>>p;
  string s;
  cin>>s;

  int s_i = p -1;
  int c_l = 0;
  for(int i = 0; i <= s_i ; ++i){
    if(s[i] == 'R'){
      c_l++;
    }
  }
  int c_r = 0 ;
  for(int i = s_i; i < n ; ++i){
    if(s[i] == 'L'){
      c_r++;
    }
  }
  cout<< min(c_l,c_r) << "\n";
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    res();
  }
  return 0;
}