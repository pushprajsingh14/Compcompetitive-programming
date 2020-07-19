// questions: https://www.codechef.com/problems/FLOW006

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int sum=0;
	    int n;
	    cin>>n;
	while(n>0)
	{
	    sum+=(n%10);
	    n=n/10;
	}
	cout<<sum<<endl;
	t--;
	}
	return 0;
}
