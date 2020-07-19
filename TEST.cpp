//question: https://www.codechef.com/problems/TEST

#include <iostream>
using namespace std;

int main() {
    int n,a[50];
    
for(int i=0;i<50;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<50;i++)
	{
	    if(a[i]==42)
	    break;
	    else
	    cout<<a[i]<<endl;
	    
	}
	return 0;
}
