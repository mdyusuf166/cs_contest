#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = a[0] + a[n - 1];

    bool ok = true;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] + a[n - 1 - i] != sum) {
            ok = false;
        }
    }

    if (ok) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}