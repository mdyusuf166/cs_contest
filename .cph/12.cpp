#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        
        vector<int> freq(N + 1, 0);

        for (int x : A) {
            freq[x]++;
        }

        int maxFreq = 0;
        int answer = 1;

        for (int i = 1; i <= N; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                answer = i;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
