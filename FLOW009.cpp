//https://www.codechef.com/problems/FLOW009

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    double total;
	    cin>>a>>b;
	    if(a>1000)
	    {
	       total=((0.9)*(a*b)) ;
	    }
	    else 
	    total=a*b;
	    cout<<fixed<<setprecision(6)<<total<<endl;
	}
	return 0;
}
