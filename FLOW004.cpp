//question: https://www.codechef.com/problems/FLOW004

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,last,first,sum=0,b;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    last=n%10;
	    while(n>0)
	    {
	    b=n%10;
	    first=b;
	    n=n/10;
	    }
	    sum=last+first;
	    cout<<sum<<endl;
	}
	return 0;
}
