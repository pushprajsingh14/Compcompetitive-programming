//https://www.codechef.com/problems/RECTSQ

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
	    int l,b;
	    cin>>l>>b;
	    int area=l*b;
	    int s=__gcd(l,b);
	    cout<<area/(s*s)<<endl;
	}
	return 0;
}
