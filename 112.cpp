#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>> n;
    vector<long long> a (n);
    for(int i = 0; i < n; i++){
      cin>> a[i];
    }
    long long s = 0;
    int bad = -1;
    for(int  i = 0; i < n;i++){
      s +=a[i];
      if(s <0){
        bad = i;
        break;
      }
    }
    if(bad == -1){
      cout<<"YES\n";
      continue;
    }
    int deI = 0;
    for(int i = 1; i <= bad; i++){
      if(a[i] < a[deI]){
        deI = i;
      }
    }
    s = 0;
    bool good = true;
    for(int i = 0; i < n; i++){
      if(i == deI) continue;
      s += a[i];
      if(s < 0){
        good = false;
        break;
      }
    }
    cout << (good ? "YES\n" : "NO\n");
  }
  return 0;
}