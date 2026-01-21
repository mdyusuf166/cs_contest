#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T ;
  cin >> T;
  while(T--){
    int N,M;
    cin >> N >> M;
    vector<int> A(N),B(M);
    for(int i = 0; i < N; i++){
      cin >> A[i];
    } 
    for(int i = 0; i < M; i++){
      cin >> B[i];

    }
    int count = 0; 
    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        if(A[i] > B[j]){
          count++;
          
        }
      }
    }
    cout << count << "\n";

  }
  return 0;
}