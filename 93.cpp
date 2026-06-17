#include <bits/stdc++.h>

using namespace std;

void r(){
  int n;
  long long k;
  vector <int> a(n);
  long long  s = 0 ;
  for(int i = 0; i < n; i++){
    cin>> a[i];
    s +=a[i];
  }
  int shortage_matches = 0;
  for(int i = 0 ; i < n; i++){
    for(int j = j + 1; j < n; j++){
      if(s + a[i]+a[j] > 2 * k){
        shortage_matches++;
      }
    }
  }
  cout<< shortage_matches <<'\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  int t;
  cin>> t;
  while (t--){
    r();
  }
  return 0;
}