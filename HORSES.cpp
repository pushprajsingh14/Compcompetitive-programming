//https://www.codechef.com/problems/HORSES

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
	    long long int s[n];
	    long long int dif,min=10000000000;
	    for (int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++)
	    for(int j=i+1;j<n;j++)
	    {
	        if(s[i]>s[j])
	        {
	            dif=s[i]-s[j];
	        }
	        else
	        {
	            dif=s[j]-s[i];
	        }
	        if(dif<min)
	        min=dif;
	    }
	    cout<<min<<endl;
	}
	return 0;
}
