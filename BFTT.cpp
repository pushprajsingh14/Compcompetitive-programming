//https://www.codechef.com/problems/BFTT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,r;
	    int sum=0;
	    int n;
	    cin>>n;
	    for(i=n+1; ;i++)
	    {
	        j=i;
	        while(j>0)
	        {
	            r=j%10;
	            if(r==3)
	            {
	                sum++;
	            }
	            j/=10;
	        }
	        if(sum>=3)
	        {
	            break;
	        }
	        else
	        {
	            sum=0;
	        }
	        
	    }
	    cout<<i<<endl;
	}
	return 0;
}
