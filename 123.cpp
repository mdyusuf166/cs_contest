#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll n){
  ll res = 0;
  ll r = 0;
  for(ll l  = 1; l <= n/2; l = r +1){
    
    ll q = n / l;
    r = min(n /2 , n/q);
    res +=(r- l +1)*(q-1);

  }
  return res;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>> n;
    cout<<solve(n)<<'\n';
  }
  return 0;
}