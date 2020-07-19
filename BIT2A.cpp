//https://www.codechef.com/problems/BIT2A

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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        int count=0;
	        for(int k=j+1;k<n;k++)
	        {
	            if(a[j]<a[k])
	            count++;
	        }
	        a[j]=count;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
