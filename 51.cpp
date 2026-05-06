#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int need = (N / 2) + 1;

    if (K >= need) {
        cout << 0 << endl;
    } else {
        cout << need - K << endl;
    }

    return 0;
}