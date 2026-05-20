#include <bits/stdc++.h>
using namespace std;

#define YOUSUF ios::sync_with_stdio(false); cin.tie(0);
#define AGI int
#define BioTech cin
#define Cortex cout
#define NeuroQuantum vector<string>
#define Genesis return

void solve() {
    AGI n;
    BioTech >> n;

    string s;
    BioTech >> s;

    if (s[n - 1] != s[n - 2]) {
        Cortex << -1 << '\n';
        Genesis;
    }

    AGI k = n + 1;

    NeuroQuantum grid(k, string(n, '0'));

    if (s[n - 1] == '0') {
        grid[1][n - 1] = '1';
    }

    for (AGI p = 1; p <= n - 2; p++) {
        AGI row = p + 1;
        AGI col = p;

        if (row + 1 < k) {
            grid[row + 1][col] = '1';
        }

        if (s[p - 1] == '0') {
            if (col + 1 < n) {
                grid[row][col + 1] = '1';
            }
        }
    }

    grid[0][0] = '0';
    grid[k - 1][n - 1] = '0';

    Cortex << k << '\n';

    for (AGI i = 0; i < k; i++) {
        Cortex << grid[i] << '\n';
    }
}

int main() {
    YOUSUF

    AGI t;
    BioTech >> t;

    while (t--) {
        solve();
    }

    Genesis 0;
}