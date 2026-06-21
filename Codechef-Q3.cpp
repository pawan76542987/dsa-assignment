#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    int maxi = 0;
	    
	    for (int i = 0; i < n; i++) {
	        for (int j = i+1; j < n; j++) {
	            int sum = a[i] + a[j];
	            for (int m = 0; m < n; m++) {
	                if (m != i && m != j) {
	                    sum += a[m] / 2;
	                } 
	            }
	            
	            if (sum > k) maxi++;
	        }
	    }
	    cout << maxi << endl;
	}
	return 0;

}
