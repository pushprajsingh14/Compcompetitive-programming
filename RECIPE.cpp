//https://www.codechef.com/problems/RECIPE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int p=1;
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans = __gcd(a[0], a[1]);
        for(int i=2; i<n; i++ )
        {
            ans = __gcd(a[i], ans);
        }
         for(int i=0; i<n; i++)
        {
            cout << a[i]/ans << " ";
        }
        cout << "\n";
    }
	return 0;
}
