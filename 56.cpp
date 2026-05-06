#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Line {
    ll m, c;

    ll value(ll x) {
        return m * x + c;
    }
};

bool bad(Line a, Line b, Line c) {
    return (__int128)(b.c - a.c) * (a.m - c.m) >=
           (__int128)(c.c - a.c) * (a.m - b.m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        ll X;
        cin >> N >> X;

        vector<ll> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        string S;
        cin >> S;

        map<ll, int> mp;
        int totalOne = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == '1') {
                mp[A[i]]++;
                totalOne++;
            } else {
                mp[A[i]] += 0;
            }
        }

        vector<ll> val;
        vector<int> cnt;

        for (auto p : mp) {
            val.push_back(p.first);
            cnt.push_back(p.second);
        }

        int M = val.size();

        vector<ll> pref(M);

        for (int i = 0; i < M; i++) {
            pref[i] = cnt[i];

            if (i > 0) {
                pref[i] += pref[i - 1];
            }
        }

        ll best = 0;

        for (int i = 0; i < M; i++) {
            ll extra = 0;

            if (cnt[i] == 0) {
                extra = 1;
            }

            ll now = val[i] * val[i] + X * cnt[i] - X * extra;
            best = max(best, now);
        }

        deque<Line> dq;

        for (int r = 0; r < M; r++) {
            if (r > 0) {
                int l = r - 1;

                ll extra = 0;
                if (cnt[l] == 0) {
                    extra = 1;
                }

                ll before = 0;
                if (l > 0) {
                    before = pref[l - 1];
                }

                Line line;
                line.m = val[l];
                line.c = -X * before - X * extra;

                while (dq.size() >= 2 && bad(dq[dq.size() - 2], dq[dq.size() - 1], line)) {
                    dq.pop_back();
                }

                dq.push_back(line);
            }

            while (dq.size() >= 2 && dq[0].value(val[r]) <= dq[1].value(val[r])) {
                dq.pop_front();
            }

            if (!dq.empty()) {
                ll extra = 0;

                if (cnt[r] == 0) {
                    extra = 1;
                }

                ll now = dq[0].value(val[r]) + X * pref[r] - X * extra;
                best = max(best, now);
            }
        }

        ll ans = best - X * totalOne;

        if (ans < 0) {
            ans = 0;
        }

        cout << ans << '\n';
    }

    return 0;
}