//https://www.codechef.com/problems/MDL

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
	    int max_value=-1,max_value_index=-1;
	    int min_value=110,min_value_index=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(min_value>a[i])
	        {
	            min_value=a[i];
	            min_value_index=i;
	        }
	        if(max_value<a[i])
	        {
	            max_value=a[i];
	            max_value_index=i;
	        }
	    }
	    if(min_value_index>max_value_index)
	    {
	        cout<<max_value<<" "<<min_value<<endl;
	    }
	    else
	    {
	        cout<<min_value<<" "<<max_value<<endl;
	    }
	}
	return 0;
}
