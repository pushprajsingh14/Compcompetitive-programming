// https://www.codechef.com/problems/FCTRL2

#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	
	
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    cpp_int p=1;
	    for(int i=n;i>=1;i--)
	    {
	        p=p*i;
	        
	    }
	    
	    cout<<p<<endl;
	    
	}
	return 0;
}
