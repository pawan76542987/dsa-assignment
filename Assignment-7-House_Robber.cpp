// House Robber

#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& a, int n) {
    if (n == 0) return 0;
    if (n == 1) return a[0];

    vector<int> dp(n);

    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);

    if (n > 1) {
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], a[i] + dp[i-2]);
        }
    }
    return dp[n-1];
} 
int main () {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << rob(a, n);
    return 0;
}
push code