#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long power(long long a, long long b) {
    long long ans = 1;

    while (b > 0) {
        if (b & 1) ans = ans * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return ans;
}

long long nCr(int n, int r, vector<long long>& fact, vector<long long>& invFact) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> fact(n + 1), invFact(n + 1);

    fact[0] = 1;

    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    invFact[n] = power(fact[n], MOD - 2);

    for (int i = n - 1; i >= 0; i--) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }

    long long answer = 0;

    for (int m = 1; m <= k; m++) {
        long long firstPart = (power(m, k) - power(m - 1, k) + MOD) % MOD;
        long long secondPart = nCr(n - m, n - k, fact, invFact);

        answer = (answer + firstPart * secondPart) % MOD;
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;

    while (testCase--) {
        solve();
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// const long long MOD = 998244353;

// long long quantumPower(long long base, long long exp) {
//     long long answer = 1;

//     while (exp > 0) {
//         if (exp & 1) {
//             answer = answer * base % MOD;
//         }

//         base = base * base % MOD;
//         exp >>= 1;
//     }

//     return answer;
// }

// long long researchChoose(int n, int r, vector<long long>& fact, vector<long long>& invFact) {
//     if (r < 0 || r > n) return 0;

//     return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
// }

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<long long> fact(n + 1), invFact(n + 1);

//     fact[0] = 1;

//     for (int i = 1; i <= n; i++) {
//         fact[i] = fact[i - 1] * i % MOD;
//     }

//     invFact[n] = quantumPower(fact[n], MOD - 2);

//     for (int i = n - 1; i >= 0; i--) {
//         invFact[i] = invFact[i + 1] * (i + 1) % MOD;
//     }

//     long long finalAnswer = 0;

//     for (int mx = 1; mx <= k; mx++) {
//         long long firstWindow = (quantumPower(mx, k) - quantumPower(mx - 1, k) + MOD) % MOD;
//         long long nextWindow = researchChoose(n - mx, n - k, fact, invFact);

//         finalAnswer = (finalAnswer + firstWindow * nextWindow) % MOD;
//     }

//     cout << finalAnswer << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCase;
//     cin >> testCase;

//     while (testCase--) {
//         solve();
//     }

//     return 0;
// }
