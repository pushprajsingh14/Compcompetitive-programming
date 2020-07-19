//https://www.codechef.com/problems/ANUBTG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    if(n==1)
	    cout<<a[0]<<endl;
	    else
	    {
	        sort(a,a+n);
	        int cost=0;
	        int i=n-1;
	        while(i>0)
	        {
	            cost+=a[i]+a[i-1];
	            i-=4;
	        }
	        if(n%4==1)
	        {
	            cost+=a[0];
	        }
	        cout<<cost<<endl;
	    }
	}
	return 0;
}
