//question: https://www.codechef.com/problems/LUCKFOUR

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
         int n,count=0,k;
	    cin>>n;
	    while(n>0)
	    {
	        k=n%10;
	        if(k==4)
	        {
	            ++count;
	        }
	        n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
