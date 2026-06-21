#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (abs(x - y) <= 2) cout << "Interesting" << endl;
    else cout << "Boring" << endl;
    return 0;

}
