//https://www.codechef.com/problems/DIET
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    int day=0;
	    int rem=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if((arr[i]+rem)>=k)
	        {
	            rem=arr[i]+rem-k;
	        }
	        else
	        {
	            day=i+1;
	            break;
	        }
	    }
	    if(day==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<" "<<day<<endl;
	}
	return 0;
}
