//https://www.codechef.com/problems/FLOW005

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    int a[6]={100,50,10,5,2,1};
	   for(int i=0;i<6;i++)
	   {
	       if(n>=a[i])
	       {
	           count=count+(n/a[i]);
	           n=n%a[i];
	       }
	   }
	   cout<<count<<endl;
	}
	return 0;
}
