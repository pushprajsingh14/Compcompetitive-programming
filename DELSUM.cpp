//https://www.codechef.com/problems/DELSUM

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m,sum=0;
	   cin>>n>>m;
	   int arr[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>arr[i];
	   }
	   sort(arr,arr+n);
	   for(int i=0;i<n-m;i++)
	   sum+=arr[i];
	   cout<<sum<<endl;
	}
	return 0;
}
