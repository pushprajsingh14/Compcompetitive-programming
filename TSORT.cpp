//question: https://www.codechef.com/problems/TSORT


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	int a[t];
	for(int k=0;k<t;k++)
	cin>>a[k];
	sort(a, a+t);
	for(int k=0;k<t;k++)
	cout<<a[k]<<endl;
	
	
	return 0;
}
