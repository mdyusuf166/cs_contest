#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> B(N);
        for (int i = 0; i < N; i++) cin >> B[i];

        vector<int> cnt(N + 2, 0);
        for (int x : B) cnt[x]++;

        for (int i = N - 1; i >= 0; i--) cnt[i] += cnt[i + 1];

        bool ok = true;
        for (int x = 0; x < K; x++) {
            if (cnt[x] < x + 1) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        sort(B.begin(), B.end(), greater<int>());

        for (int x : B) cout << x << " ";
        cout << '\n';
    }

    return 0;
}