#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    if ((s.back() - '0') % 2 == 1) {
        cout << 0 << '\n';
        return;
    }

    bool hasOdd = false;
    for (char c : s) {
        if ((c - '0') % 2 == 1) {
            hasOdd = true;
            break;
        }
    }

    if (!hasOdd) {
        if (n == 1) cout << -1 << '\n';
        else cout << 2 << '\n';
        return;
    }

    if ((s[0] - '0') % 2 == 1) cout << 1 << '\n';
    else cout << 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if ((s.back() - '0') % 2 == 1) { cout << 0 << '\n'; return; }
    bool hasOdd = false;
    for (char c : s) if ((c - '0') % 2 == 1) { hasOdd = true; break; }
    if (!hasOdd) { cout << (s.size() == 1 ? -1 : 2) << '\n'; return; }
    cout << ((s[0] - '0') % 2 == 1 ? 1 : 2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
S