//https://www.codechef.com/problems/PALL01

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int m;
	    m=n;
	    int a;
	    int rev=0;
	    while(m>0)
	    {
	        a=m%10;
	        rev=rev*10+a;
	        m=m/10;
	    }
	    if(rev==n)
	    cout<<"wins"<<endl;
	    else
	    cout<<"losses"<<endl;
	}
	return 0;
}
