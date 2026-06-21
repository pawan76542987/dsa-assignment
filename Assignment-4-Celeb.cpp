#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	stack<int> st;

	for(int i = 0; i < n; i++) {
		st.push(i);
	}

	while (st.size() > 1) {
		int a = st.top();
		st.pop();
		int b = st.top();
		st.pop();

		if (v[a][b] == 1) {
			st.push(b);
		} else st.push(a);
	}
	int celeb = st.top();

	bool found = true;

	for (int i = 0; i < n; i++) {
		if (v[celeb][i] == 1) {
			found = false;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (i != celeb && v[i][celeb] == 0) {
			found = false;
			break;
		}
	}
	if (found) cout << celeb << endl;
	else cout << -1 << endl;

	return 0;

}