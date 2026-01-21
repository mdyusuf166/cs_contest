// #include <bits/stdc++.h>
// using namespace std;
// bool hasodd(long long n){
//   while(n){
//     if((n%10)%2==1) return true;
//     n/=10;
//   }
//   return false;
// }
// bool haseven(long long n){
//   while(n){
//     if((n%10)%2==0) return true;
//     n/=10;
//   }
//   return false;
// }
// int main(){
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int T;
//   cin >> T;
//   while (T--) {
//     long long N;
//     cin >> N;
//     if( N % 2 == 1){
//       cout << 0 << '\n';
//       continue;
//     }
//     if( hasodd(N) ){
//       cout << 1 << '\n';
//       continue;
//     }
//     if( haseven(N) ){
//       cout << 2 << '\n';
//       continue;
//     }
//     bool p = false;
//     long long temp = N;
//     while(temp > 0){
//       int d = temp % 10;
//       long long new_num = temp - d;
//       if(new_num > 0 && hasodd(new_num)){
//         p = true;
//         break;
//       }
//     }
//     temp /= 10;
//     if(p)
//     cout<< 2 << '\n';
//     else cout << -1 << '\n';  
// }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool hasOddDigit(long long n) {
//     while (n > 0) {
//         int d = n % 10;
//         if (d % 2 == 1) return true;
//         n /= 10;
//     }
//     return false;
// }

// bool allDigitsEven(long long n) {
//     while (n > 0) {
//         int d = n % 10;
//         if (d % 2 == 1) return false;
//         n /= 10;
//     }
//     return true;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         long long N;
//         cin >> N;

//         // Case 1: already odd
//         if (N % 2 == 1) {
//             cout << 0 << '\n';
//             continue;
//         }

//         // Case 2: contains odd digit
//         if (hasOddDigit(N)) {
//             cout << 1 << '\n';
//             continue;
//         }

//         // Case 3: all digits even
//         bool possible = false;
//         long long temp = N;

//         // try subtracting each digit once
//         while (temp > 0) {
//             int d = temp % 10;
//             if (d > 0) {
//                 long long newN = N - d;
//                 if (newN > 0 && hasOddDigit(newN)) {
//                     possible = true;
//                     break;
//                 }
//             }
//             temp /= 10;
//         }

//         if (possible)
//             cout << 2 << '\n';
//         else
//             cout << -1 << '\n';
//     }

//     return 0;
// }
