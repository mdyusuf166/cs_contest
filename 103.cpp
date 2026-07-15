//https://www.codechef.com/START247B/problems/FLIP2K

#include <bits/stdc++.h>
using namespace std;
void res(){
  int n,k;
  cin>>n>>k;
  string s;
  cin>> s;
  int zec = count(s.begin(), s.end(), '0');
  int onc = n - zec;

  if(zec < k || onc < k){
    cout << s << "\n";
    return ;
  }
  if( n== 2*k){
    string fld = s;
    for(char &c : fld){
      c = (c == '0') ? '1' : '0';
    }
    cout<<min(s,fld) << "\n";
    return ;
  }
  cout<<string(zec,'0')+string(onc,'1') << "\n";
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