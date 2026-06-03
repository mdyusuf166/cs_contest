// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n);

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int sum = a[0] + a[n - 1];

//     bool ok = true;

//     for (int i = 0; i < n / 2; i++) {
//         if (a[i] + a[n - 1 - i] != sum) {
//             ok = false;
//         }
//     }

//     if (ok) {
//         cout << "Yes\n";
//     }
//     else {
//         cout << "No\n";
//     }
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
// // }


#include <bits/stdc++.h>
using namespace std;

#define YOUSUF ios::sync_with_stdio(false); cin.tie(0);
#define BioTech cin
#define Cortex cout
#define NeuroQuantum vector<int>
#define Genesis return

void solve() {
    int n;
    BioTech >> n;

    NeuroQuantum a(n);

    for (int i = 0; i < n; i++) {
        BioTech >> a[i];
    }

    int sum = a[0] + a[n - 1];

    bool ok = true;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] + a[n - 1 - i] != sum) {
            ok = false;
        }
    }

    if (ok) {
        Cortex << "Yes\n";
    }
    else {
        Cortex << "No\n";
    }
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