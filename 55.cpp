#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int neg = 0, pos = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == -1) neg++;
            else if (x == 1) pos++;
        }

        vector<int> ans;

        if (neg == 0 && pos == 0) {
            ans.push_back(0);
        }
        else if (neg == 0) {
            ans.push_back(-1);
        }
        else if (pos == 0) {
            ans.push_back(1);
        }
        else {
            if (pos >= 2) ans.push_back(-1);
            ans.push_back(0);
            if (neg >= 2) ans.push_back(1);
        }

        for (int x : ans) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}