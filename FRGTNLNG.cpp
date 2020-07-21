//https://www.codechef.com/problems/FRGTNLNG

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
	    int n,k;
	    cin>>n>>k;
	    int old_count[n]={0};
	    string old[n];
	    for(int i=0;i<n;i++)
	    cin>>old[i];
	    while(k--)
	    {
	        int length;
	        cin>>length;
	        string new_lang[length];
	        for(int i=0;i<length;i++)
	        {
	            cin>>new_lang[i];
	        }
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<length;j++)
	            {
	                if(old[i]==new_lang[j])
	                {
	                    old_count[i]=1;
	                }
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(old_count[i]==1)
	        cout<<"YES"<<" ";
	        else
	        cout<<"NO"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
