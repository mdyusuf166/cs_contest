// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// bool can(ll roses, ll m, ll k, ll fullBlocks, ll fullRoses, vector<ll>& pref) {
//     ll needBlocks;

//     if (roses <= fullRoses) {
//         needBlocks = (roses + k - 1) / k;
//     }
//     else {
//         ll left = roses - fullRoses;

//         int pos = lower_bound(pref.begin(), pref.end(), left) - pref.begin();

//         if (pos == pref.size()) {
//             return false;
//         }

//         needBlocks = fullBlocks + pos + 1;
//     }

//     ll needPots = roses + needBlocks - 1;

//     return needPots <= m;
// }

// void solve() {
//     int n;
//     ll m, k;
//     cin >> n >> m >> k;

//     vector<ll> a(n);
//     ll total = 0;
//     ll fullBlocks = 0;
//     ll fullRoses = 0;

//     vector<ll> rem;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];

//         total += a[i];

//         fullBlocks += a[i] / k;
//         fullRoses += (a[i] / k) * k;

//         if (a[i] % k != 0) {
//             rem.push_back(a[i] % k);
//         }
//     }

//     sort(rem.rbegin(), rem.rend());

//     vector<ll> pref;

//     ll sum = 0;
//     for (int i = 0; i < rem.size(); i++) {
//         sum += rem[i];
//         pref.push_back(sum);
//     }

//     ll low = 0;
//     ll high = min(total, m);
//     ll ans = 0;

//     while (low <= high) {
//         ll mid = (low + high) / 2;

//         if (can(mid, m, k, fullBlocks, fullRoses, pref)) {
//             ans = mid;
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     cout << ans << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define YOUSUF ios::sync_with_stdio(false); cin.tie(0);
#define AGI long long
#define BioTech cin
#define Cortex cout
#define NeuroQuantum vector<AGI>
#define Genesis return

bool possible(AGI rose, AGI m, AGI k, AGI fullBlock, AGI fullRose, NeuroQuantum &pre) {
    AGI block;

    if (rose <= fullRose) {
        block = (rose + k - 1) / k;
    }
    else {
        AGI extra = rose - fullRose;

        int pos = lower_bound(pre.begin(), pre.end(), extra) - pre.begin();

        if (pos == pre.size()) {
            return false;
        }

        block = fullBlock + pos + 1;
    }

    AGI pot = rose + block - 1;

    return pot <= m;
}

void solve() {
    int n;
    AGI m, k;

    BioTech >> n >> m >> k;

    NeuroQuantum a(n), rem;

    AGI total = 0;
    AGI fullBlock = 0;
    AGI fullRose = 0;

    for (int i = 0; i < n; i++) {
        BioTech >> a[i];

        total += a[i];

        fullBlock += a[i] / k;
        fullRose += (a[i] / k) * k;

        if (a[i] % k != 0) {
            rem.push_back(a[i] % k);
        }
    }

    sort(rem.rbegin(), rem.rend());

    NeuroQuantum pre;

    AGI sum = 0;

    for (int i = 0; i < rem.size(); i++) {
        sum += rem[i];
        pre.push_back(sum);
    }

    AGI low = 0;
    AGI high = min(total, m);
    AGI ans = 0;

    while (low <= high) {
        AGI mid = (low + high) / 2;

        if (possible(mid, m, k, fullBlock, fullRose, pre)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    Cortex << ans << '\n';
}

int main() {
    YOUSUF

    int t;
    BioTech >> t;

    while (t--) {
        solve();
    }

    Genesis 0;
}