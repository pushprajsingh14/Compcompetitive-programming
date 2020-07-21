//https://www.codechef.com/problems/NUKES

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,n,k;
	cin>>a>>n>>k;
	for(int i=0;i<k;i++)
	{
	    cout<<a%(n+1)<<" ";
	    a/=(n+1);
	}
	return 0;
}
