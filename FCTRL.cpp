//https://www.codechef.com/problems/FCTRL

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
	    long long int i,n,sum=0;
	    cin>>n;
	    while(n>0)
	    {
	        sum=sum+n/5;
	        n=n/5;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
