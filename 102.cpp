//https://www.codechef.com/START247B/problems/STRINGSHIFT

#include<bits/stdc++.h>
using namespace std;
void res(){
  int n;
  cin>> n;
  string s;
  cin>> s;
  int s_id = -1;
  for(int i = 0; i < n; i++){
    if(s[i] == 'z'){
      s_id = i;
      break;
    }
  }
  if(s_id == -1){
    cout<< s << "\n";
    return;
  }
  for(int i = s_id; i < n; i++){
    if(s[i] == 'z'){
      s[i] = 'a';
    }
    else{
      
      break;
    }
  }
  cout << s << "\n";
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