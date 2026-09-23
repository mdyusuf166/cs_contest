#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  int t;
  cin>> t;
  while(t--){
    int n ,k;
    cin>> n>> k;

    vector<int> c(n);
    for(int i = 0; i < n; i++) cin>> c[i];
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
      for(int j  = i + 1; j < n; j++){
        bool pose = true;
        for(int s = 0; s < n; s++){
          bool cov_f= abs(i - s) <=k;
          bool cov_s= abs(j - s) <=k;
          if(!cov_f && !cov_s){
            pose = false;
            break;
          }
        }
        if(pose){
          ans = min(ans, c[i] + c[j]);
        }
      }
    }
    if(ans == INT_MAX) cout<< -1<< "\n";
    else cout<< ans<< "\n";
  }
  return 0;
}