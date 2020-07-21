//https://www.codechef.com/problems/VCS

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
	    int n,m,k;
	    cin>>n>>m>>k;
	    int source[n]={0};
	    int ignored[m];
	    int tracked[k];
	    for(int i=0;i<m;i++)
	    {
	        cin>>ignored[i];
	        source[ignored[i]-1]=1; //ignored=1
	    }
	    for(int i=0;i<k;i++)
	    {
	        cin>>tracked[i];
	        if(source[tracked[i]-1]==1)
	            source[i]=2;  //tracked and ignored both=3
	        else
	            source[tracked[i]-1]=1;  //tracked=2
	    }
	    int track_ignored=0;
	    int untracked_unignored=0;
	    for(int i=0;i<n;i++)
	    {
	        if(source[i]==2)
	        track_ignored++;
	    }
	    cout<<track_ignored<<" "<<n-m-k+track_ignored<<endl;
	}
	return 0;
}
