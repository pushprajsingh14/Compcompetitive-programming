//https://www.codechef.com/problems/RRJOKE

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
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    int y=1;
	    for(int j=2;j<=n;j++)
	    {
	        y=y xor j;
	    }
	    cout<<y<<endl;
	}
	return 0;
}
