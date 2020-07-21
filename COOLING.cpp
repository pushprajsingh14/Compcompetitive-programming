//https://www.codechef.com/problems/COOLING

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,count=0;
	    cin>>n;
	    int p[n],w[n];
	    for(int i=0;i<n;i++)
	        cin>>p[i];
	    for(int i=0;i<n;i++)
	        cin>>w[i];
	    sort(p,p+n);
        sort(w,w+n);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            if(w[j]>=p[i])
            {
                w[j]=0;
                count++;
                break;   
            }
        }
	     cout<<count<<endl;   
	        
	}
	return 0;
}
