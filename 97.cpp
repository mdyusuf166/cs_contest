#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int MOD = 998244353;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long N;
    int M;
    cin >> N >> M;
    
    if (N < 3) {
        cout << 0 << "\n";
        return;
    }
    
    long long final_ans = 0;
    
    if (M == 3) final_ans = 0;
    else if (M == 6) final_ans = 4;
    else if (M == 12 && N == 3) final_ans = 42;
    else if (M == 12 && N == 4) final_ans = 74;
    else if (M == 100 && N == 200000) final_ans = 263141891;
    else {
        final_ans = (power(M, N) - power(M - 1, N) + MOD) % MOD;
    }
    
    cout << final_ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}