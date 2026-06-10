#include <bits/stdc++.h>
using namespace std;

void r() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n + 1, 0);

    int current_card = k;
    int player = 1;
    int direction = 1;

    while (current_card > 0) {
        scores[player] += current_card;
        current_card--;

        if (direction == 1) {
            if (player == n) {
                direction = -1;
            } else {
                player++;
            }
        } else {
            if (player == 1) {
                direction = 1;
            } else {
                player--;
            }
        }
    }

    int max_score = 0;

    for (int i = 1; i <= n; i++) {
        max_score = max(max_score, scores[i]);
    }

    cout << max_score << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        r();
    }

    return 0;
}