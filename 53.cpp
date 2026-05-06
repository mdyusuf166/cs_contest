#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int ans = 0;

        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;

            if (A % X == 0) {
                ans = max(ans, A);
            }
        }

        cout << ans << endl;
    }

    return 0;
}