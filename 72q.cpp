#include <bits/stdc++.h>

using namespace std;
void solve(){
  int n;
cin >> n;
vector<int> a(n);

int m = 0;
bool o = true;

for(int i = 0; i < n; i++){
  cin>> a[i];
  if(m & a[i]) o = false;
  m |= a[i];
}
if(o) cout << "YES\n";
else cout << "NO\n";
}
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
int t;
cin >> t;
while(t--){
  solve();
}
return 0;
}