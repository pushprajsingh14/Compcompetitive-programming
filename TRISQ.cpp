//https://www.codechef.com/problems/TRISQ

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a=n/2;
	    int temp=0;
	    for (int i=1; i<a;i++ )
	    {
	       temp=temp+i;
	    }
	    cout<<temp<<endl;
	    
	}
	return 0;
}
