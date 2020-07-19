//https://www.codechef.com/problems/TRICOIN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n=0,i=1,sum=0,l=0;
	    cin>>n;

	    for(i=1;i<=n;i++){
	        
	        sum = (i*(i+1))/2;

	        if(sum<=n)
	            l++;
	        else
	            break;
	    }
	    
	    cout<<l<<endl;
	}
	return 0;
}
