#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    cout << (abs(x - y) <= 2 ? "Interesting" : "Boring");
    
    return 0;
}