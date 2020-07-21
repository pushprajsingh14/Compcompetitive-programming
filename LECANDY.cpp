//https://www.codechef.com/problems/LECANDY

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
	    int n,c;
	    cin>>n>>c;
	    int choc[n];
	    int need=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>choc[i];
	        need+=choc[i];
	    }
	    if(need<=c)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
