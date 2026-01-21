#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N + 1);
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        int cost = 0;

        for (int i = N; i >= 1; i--) {
            if (A[i] != i) {
                cost = A[i];
                break;
            }
        }

        cout << cost << endl;
    }

    return 0;
}
