#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int remaining = X - 100;
    int popcornBuckets = remaining / 50;

    cout << popcornBuckets << endl;
    return 0;
}
