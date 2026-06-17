#include <bits/stdc++.h>
using namespace std;

void r() {
    int n;
    cin >> n;

    vector<int> a(n);
    int t_or = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        t_or |= a[i];
    }

    int cur_or = 0;
    int par = 0;

    for (int i = 0; i < n; i++) {
        cur_or |= a[i];

        if (cur_or == t_or) {
            par++;
            cur_or = 0;
        }
    }

    cout << n - par << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        r();
    }

    return 0;
}