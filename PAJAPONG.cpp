//https://www.codechef.com/problems/PAJAPONG

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k;
	    cin>>x>>y>>k;
	    int a=(x+y)/k;
	    if(a%2==0)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Paja"<<endl;
	    }
	}
	return 0;
}
