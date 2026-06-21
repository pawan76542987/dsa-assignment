// Early Certificates

#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--) {
	     int n, m;
	     cin >> n >> m;
	     
	     string a, b;
	     cin >> a >> b;
	    
	    string result;
	     
	   //  for (int i = 0; i < n; i++) {
	   //      for (int j = 0; j < m; j++) {
	   //          if (a[i] == b[j]) {
	   //              result.push_back(a[i]);
	   //          } 
	   //      }
	   //  }
	   int i = 0, j = 0;
	   while (i < n && j < m) {
	       if (a[i] == b[j]) result.push_back(b[j]);
	       else break;
	       i++;
	       j++;
	   }
	     cout << result << endl;
	 }
	 return 0;

}
