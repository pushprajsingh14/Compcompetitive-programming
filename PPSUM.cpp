//https://www.codechef.com/problems/PPSUM

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
	    int d,n;
	    cin>>d>>n;
	    int sum=0;
	    for(int i=1;i<=d;i++)
	    {
	        sum=0;
	        for(int j=1;j<=n;j++)
	        {
	            sum+=j;
	        }
	        n=sum;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
