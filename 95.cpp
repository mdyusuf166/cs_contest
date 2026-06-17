#include  <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

long long p (long long base ,long long exp){
  long long res = 1;
  base %= MOD;

  while (exp > 0){
    if( exp % 2 == 1) res = (res * base ) % MOD;
    base = (base * base) % MOD;
    exp /= 2;
  }
  return res;

}

int lcm (int a, int b){
  return (a / gcd(a,b)) *b;
}
void r(){
  long long n;
  int m;
  cin >> n >> m;
  if( n < 3){
    cout<< 0 <<"\n";
    return ;
  }
}
vector<vector<long long >> g(m+1,vector<long long>(m+1,0));
for(int q = m; q>= 2; q--){
  for(int p = m ; p >= 2; p--){
    int l = lcm(q,p);
    if( l > m && n > 2){
      g[q][p] = 0;
      continue;
    }
    long long choces_A1 = m /q;
    long long choices_AN = m /p;

    long long choices_middle = ( k <= m )?(m /l): 0;
    long long toatal_ways = (choices_A! * choices_AN) % MOD;
    for(int mq = q; mq <= m; mq += q ){
      for(int mp = p; mp <= m;mp += p){
        if(mq == q && mp == p)continue;
        total_ways = (total_ways -g[mq][mp] + MOD ) % MOD;
      }
    }
    g[q][p]= total_ways;
    }

    long long ans = 0;
    for(int q = 2; q <= m; q++){
      for(int p = 2; p <= m; p++){
        if(gcd(q,p) == 1){
          ans = (ans + g[q][p]) % MOD;
        }
      }
    }
    cout << ans <<"\n";
}



int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while (t--){
      r();
    }
    return 0;
}