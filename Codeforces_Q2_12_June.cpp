#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool found = true;
        for (int i = 0; i < k; i++) {
        	vector<char> ans;

        	for (int j = i; j < n; j += k) {
        		ans.push_back(s[j]);
        	}
        	int cnt = 0;
        	for (auto ch : ans) {
        		if (ch == '1') {
        			cnt++;
        		}
        	}
        	if (cnt % 2 != 0) {
        		found = false;
        		break;
        	}
        }
        cout << (found ? "YES" : "NO") << endl;
	}
    return 0;
}