#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> ans;
		int max_ele = *max_element(a.begin(), a.end());
		int max_height = max_ele + 1;
		for (int i = 0; i < n; i++) {
			ans.push_back(max_height - a[i]);
		}
		int k = *max_element(ans.begin(), ans.end());
		cout << k << endl;
 
	}
	return 0;
}