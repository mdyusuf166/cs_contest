#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool can(vector<ll>& a, int lB, ll x) {

    int n = a.size();
ll s = 0;
    ll prev = -1;

    for (int i = 0; i < n; i++) {

        ll cur;

        if (a[i] >= x) {

            s += a[i] - x;
            cur = x;
        }
        else {

            ll need = x - a[i];

            ll take = min(s, need);

            cur = a[i] + take;

            s -= take;
        }

        if (i > 0 && cur < prev) {
            return false;
        }

        prev = cur;

        if (i >= lB) {
            if (i == n - 1) {
                return true;
            }
            if (cur <= a[i + 1]) {
                return true;
            }
        }
    }

    return false;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int lB = -1;

        for (int i = 0; i + 1 < n; i++) {

            if (a[i] > a[i + 1]) {
                lB = i;
            }
        }
        if (lB == -1) {

            cout << -1 << '\n';

            continue;
        }
        ll mx = *max_element(a.begin(), a.end());
        ll lo = 1;
        ll hi = mx;

        ll ans = 0;


        while (lo <= hi) {
          ll mid = lo + (hi - lo) / 2;


            if (can(a, lB, mid)) {

                ans = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }


        cout << ans << '\n';
    }

    return 0;
}