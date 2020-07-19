//question: https://www.codechef.com/problems/FLOW007

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n=0;
        int rem=0;
        int ans=0;
	    cin>>n;
	    while(n>0)
	    {
	        rem=n%10;
	        n=n/10;
	        ans=ans*10+rem;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
