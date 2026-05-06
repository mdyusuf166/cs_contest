#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;

        int a[3] = {x, y, z};
        sort(a, a + 3);

        int small1 = a[0];
        int small2 = a[1];
        int big = a[2];

        if (small1 + small2 > big) {
            cout << 0 << endl;
        } else {
            cout << big - (small1 + small2) + 1 << endl;
        }
    }

    return 0;
}