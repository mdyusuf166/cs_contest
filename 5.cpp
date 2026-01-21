#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

bool isOdd(long long x)
{
    return x % 2 == 1;
}

bool checkOdd(long long x)
{
    while (x)
    {
        if ((x % 10) % 2 == 1)
            return true;
        x /= 10;
    }
    return false;
}

void solve()
{
    string s;
    cin >> s;
    long long n = stoll(s);

    if (n % 2 == 1)
    {
        cout << 0 << '\n';
        return;
    }

    if (checkOdd(n))
    {
        cout << 1 << '\n';
        return;
    }
    if (s.size() == 1)
    {
        cout << -1 << '\n';
        return;
    }

    set<int> digits;
    for (char c : s)
    {
        digits.insert(c - '0');
    }

    bool found   = false;
    for (int k : digits)
    {
        if (k == 0)
            continue;
        long long n1 = n - k;
        if (n1 <= 0)
            continue;
        if (checkOdd(n1))
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << 2 << '\n';
    }
    else
    {
        cout << 3 << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}