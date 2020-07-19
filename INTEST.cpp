//question:  https://www.codechef.com/problems/INTEST

#include <bits/stdc++.h> 

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
  
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	cout << ans << "\n";	
		
	return 0;
}
