// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int ans = 0;

//     for (int i = 2; i < n; i++) {
//         if (s[i] == s[i - 1] && s[i] == s[i - 2]) {
//             ans++;
//             s[i] = '#';
//         }
//     }

//     cout << ans << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string bioTech;
    cin >> bioTech;

    int answer = 0;

    for (int i = 2; i < n; i++) {

        if (bioTech[i] == bioTech[i - 1] &&
            bioTech[i] == bioTech[i - 2]) {

            answer++;
            bioTech[i] = '#';
        }
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        solve();
    }

    return 0;
}