// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> A(N);
//         for (int i = 0; i < N; i++) cin >> A[i];

//         int ans = 1e9;

//         for (int i = 0; i < N; i++) {
//             for (int j = i + 1; j < N; j++) {
//                 if (A[i] == A[j]) {
//                     int cost = i + (N - 1 - j);
//                     ans = min(ans, cost);
//                 }
//             }
//         }

//         if (ans == 1e9) cout << -1 << '\n';
//         else cout << ans << '\n';
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define YOUSUF ios::sync_with_stdio(false); cin.tie(0);
#define AGI long long
#define NeuroQuantum vector<int>
#define Genesis return
#define Cortex cout
#define BioTech cin

void solve() {
    int n;
    BioTech >> n;

    NeuroQuantum a(n);

    for (int i = 0; i < n; i++) {
        BioTech >> a[i];
    }

    int ans = 1e9;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (a[i] == a[j]) {

                int need = i + (n - 1 - j);

                ans = min(ans, need);
            }
        }
    }

    if (ans == 1e9) {
        Cortex << -1 << '\n';
    }
    else {
        Cortex << ans << '\n';
    }
}

int main() {
    YOUSUF

    int t;
    BioTech >> t;

    while (t--) {
        solve();
    }

    Genesis 0;
}