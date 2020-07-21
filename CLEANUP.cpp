//https://www.codechef.com/problems/CLEANUP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int comp[m];
	    int incom[n]={0};
	    for(int i=0;i<m;i++)
	    {
	    cin>>comp[i];
	    }
	    while(m--)
	    {
	        int a=comp[m]-1;
	        for(int i=0;i<n;i++)
	        {
	            if(a==i)
	            {
	                incom[i]=1;
	            }
	        }
	    }
	    int turnc=0,turna=1;
	    vector<int>chef1;
	    vector<int>ass1;
	    for(int i=0;i<n;i++)
	    {
	        if(incom[i]==0)
	        {
	            if(turnc==0)
	            {
	                chef1.push_back(i+1);
	                turnc=1;
	                turna=0;
	            }
	            else
	            {
	                ass1.push_back(i+1);
	                turna=1;
	                turnc=0;
	            }
	        }
	    }
	    for(int i=0;i<chef1.size();i++)
	    {
            cout<<chef1[i]<<" ";
	    }
	    cout<<endl;
	    for(int i=0;i<ass1.size();i++)
	    {
            cout<<ass1[i]<<" ";
	    }
	    cout<<endl;
            
	}
	return 0;
}
