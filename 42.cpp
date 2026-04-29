// https://www.codechef.com/START236D/problems/UWUWU

#include <bits/stdc++.h>
using namespace std;

bool isCute(string t) {
    int len = t.size();

    if (len % 2 == 0) return false;

    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            // 1st, 3rd, 5th... position
            if (t[i] != 'u' && t[i] != 'o') return false;
        } else {
            // 2nd, 4th, 6th... position
            if (t[i] != 'w') return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int ans = 0;

        for (int l = 0; l < N; l++) {
            string temp = "";

            for (int r = l; r < N; r++) {
                temp += S[r];

                if (isCute(temp)) {
                    ans = max(ans, (int)temp.size());
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}