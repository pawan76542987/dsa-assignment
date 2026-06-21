#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int m, n;
	    cin >> m >> n;
	    int ans = m;
	    for (int w = 0; w <= m; w++) {
	        for (int d = 0; d <= m - w; d++) {
	            int l = m -w -d;
	            if (3 * w + d == n) {
	                ans = min(ans, l);
	            }
	        }
	    }
	    cout << ans << endl;
	}
    return 0;
}
