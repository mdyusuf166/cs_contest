#include <bits/stdc++.h>
using namespace std;

static const int MOD = 998244353;

void res() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    vector<int> red;
    vector<int> blue;
    vector<int> beblue;

    int bluc = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] == 0) {
            red.push_back(a[i]);
            beblue.push_back(bluc);
        } else {
            blue.push_back(a[i]);
            bluc++;
        }
    }

    int R = red.size();
    int B = blue.size();

    vector<int> lower(R, 0);
    vector<int> upper(R, B + 1);

    for (int i = 0; i < R; i++) {
        int r = red[i];
        int oribe = beblue[i];

        for (int j = 0; j < B; j++) {
            if (blue[j] > r) {
                if (j < oribe) {
                    lower[i] = max(lower[i], j + 1);
                } else {
                    upper[i] = min(upper[i], j + 1);
                }
            }
        }
    }

    vector<vector<int>> dp(R + 1, vector<int>(B + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= R; i++) {
        for (int j = 0; j <= B; j++) {
            int ws = dp[i][j];

            if (ws == 0) continue;

            if (j < B) {
                dp[i][j + 1] += ws;

                if (dp[i][j + 1] >= MOD) {
                    dp[i][j + 1] -= MOD;
                }
            }

            if (i < R && lower[i] <= j && j < upper[i]) {
                dp[i + 1][j] += ws;

                if (dp[i + 1][j] >= MOD) {
                    dp[i + 1][j] -= MOD;
                }
            }
        }
    }

    cout << dp[R][B] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        res();
    }

    return 0;
}