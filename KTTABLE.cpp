//https://www.codechef.com/problems/KTTABLE

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
	    int time_alloted[n];
	     int time_alloted_new[n]={0};
	    int time_required[n];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>time_alloted[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>time_required[i];
	    }
	    time_alloted_new[0]=time_alloted[0];
	    if(time_alloted_new[0]>=time_required[0])
	    count++;
	    for(int i=1;i<n;i++)
	    {
	        time_alloted_new[i]=time_alloted[i]-time_alloted[i-1];
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(time_alloted_new[i]>=time_required[i])
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
