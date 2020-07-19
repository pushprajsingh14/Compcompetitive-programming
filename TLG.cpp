//question: https://www.codechef.com/problems/TLG

#include <iostream>
using namespace std;

int main() {
	int t,lead=0,ply=0;cin>>t;int d=0,c=0;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    c+=a;
	    d+=b;
	    if(lead<c-d)
	    {
	        lead=c-d;ply=1;
	    }
	    if(lead<d-c)
	    {
	        lead=d-c;ply=2;
	    }
	    
	}
	cout<<ply<<" "<<lead;
	return 0;
}
