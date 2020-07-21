//https://www.codechef.com/problems/SNAPE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   double b,ls;
	   cin>>ls>>b;
	   cout<<sqrt((b*b)-(ls*ls))<<" ";
	   cout<<sqrt((b*b)+(ls*ls))<<endl;
	}
	return 0;
}
