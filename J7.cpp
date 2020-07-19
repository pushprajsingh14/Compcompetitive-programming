//https://www.codechef.com/problems/J7

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int p,s;
	    cin>>p>>s;
	    float a,v;
	    a = (p-sqrt(p*p-24*s))/12;
		v = (a*s)/2-(a*a*p)/4+(a*a*a);
		cout<<v<<endl;
	}

	return 0;
}
