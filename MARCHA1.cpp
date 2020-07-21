//https://www.codechef.com/problems/MARCHA1

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
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int flag=0;
	    for(int i=0;i<pow(2,n);i++)
	    {
	        int sum=0;
	        for(int j=0;j<n;j++)
	        {
	            if((i & (1<<j))!=0)
	            {
	                sum+=a[j];
	            }
	        }
	        if(sum==m)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(m==0)
	    {
	        flag=1;
	    }
	    if(flag==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
