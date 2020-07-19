//https://www.codechef.com/problems/WATSCORE

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[12]={0};
	    ll x,y;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>x>>y;
	        if(a[x]<y)
	        a[x]=y;
	        
	    }
	    ll sum=0;
	    for(ll i=0;i<=8;i++)
	    {
	        sum+=a[i];
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
