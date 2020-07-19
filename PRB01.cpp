//https://www.codechef.com/problems/PRB01

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    for(int i=2;i<=n/2;i++)
	    if(n%i==0)
	    count++;
	    if(count==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
