# include <bits/stdc++.h>
using namespace std;
void s(){
  int n;
  cin >> n;
  vector<int> a(n);
  int sum = 0;
  for(int i = 0; i < n; i++) {
   cin >> a[i];
   sum += a[i];
  }
  bool possible = false;
  for(int i = 0; i < n; i++) {
    if(sum - a[i] % 2 == 0) {
      possible = true;
      break;
    }
  }
  if(possible) cout << "YES" << endl;
  else cout << "NO" << endl;

}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    s();
  }
  return 0;

}