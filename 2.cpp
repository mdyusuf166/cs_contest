#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> temp(N);
        for (int i = 0; i < N; i++) {
            cin >> temp[i];
        }

        bool wearing = false;
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (temp[i] < A) {
                if (!wearing) {
                    count++;
                    wearing = true;
                }
            } else if (temp[i] > B) {
                wearing = false;
            }
        }

        cout << count << '\n';
    }
    return 0;
}
