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
		for (int i = 0; i < n; i++) {
			int j = i+1;
			while (j < n) {
				if (a[i] < a[j]) {
				    a[j] = a[i];
				    break;
			    }
			    j++;
			}
		}
		int result = 0;
		for (int i = 0; i < n; i++) {
			result += a[i];
		}
		cout << result << endl;
	}
	return 0;
}