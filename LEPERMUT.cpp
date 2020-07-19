//https://www.codechef.com/problems/LEPERMUT

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int c1=0,c2=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	          c2++;
	        for(int j=i;j<n;j++)
	        {
	            if(arr[i]>arr[j])
	              c1++;
	        }
	    }
	    if(c1==c2)
	      cout<<"YES"<<endl;
	      else
	      cout<<"NO\n";
	}
	return 0;
}
