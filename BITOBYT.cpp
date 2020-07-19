//https://www.codechef.com/problems/BITOBYT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=n/26;
	    int y=n%26;
	    long long bits=pow(2,x);
	    if(y==2|| y==1 || n==0)
	    {
	        cout<<bits<<" 0 0"<<endl;
	    }
	    else if(y>2 && y<=10)
	    {
	        cout<<"0 "<<bits<<" 0"<<endl;
	    }
	    else if(n%26==0 && n!=0)
	    {
	        cout<<"0 0 "<<bits/2<<endl;
	    }
	    else
	    {
	        cout<<"0 0 "<<bits<<endl;
	    }
	}
	return 0;
}
