//https://www.codechef.com/START236D/problems/PALKINS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n - 1;
        bool ok = true;

        while (l < r) {
            if (a[l] == a[r]) {
                l++;
                r--;
            } else if (a[l] == k) {
                l++;
            } else if (a[r] == k) {
                r--;
            } else {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
}