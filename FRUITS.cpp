//https://www.codechef.com/problems/FRUITS

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
	    int n, m, k,ans,diff;
	    cin>>n>>m>>k;
	    diff = abs(n-m);
	    ans = diff-k;
	    if(ans<0)
	    cout<<"0"<<endl;
	    else
	    cout<<ans<<endl;
	}
	
	return 0;
}
