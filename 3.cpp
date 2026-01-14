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
//         string S;
//         cin >> S;

//         vector<int> freq(26, 0);
//         for (char c : S) {
//             freq[c - 'a']++;
//         }

//         int mx = *max_element(freq.begin(), freq.end());

//         if (mx <= (N + 1) / 2)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        bool ok = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= 3) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

