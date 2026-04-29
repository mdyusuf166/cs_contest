// https://www.codechef.com/START236D/problems/EXGS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int total = X * 100 + (Y - X) * 150;

    cout << total << endl;

    return 0;
}