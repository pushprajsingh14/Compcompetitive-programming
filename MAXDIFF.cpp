//https://www.codechef.com/problems/MAXDIFF

#include <bits/stdc++.h>
using namespace std;

int main() {
    //your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
        cin>>n>>k;
        int arr[100];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        k=min(k,n-k);
        int sum1=0;
        for(int i=0;i<k;i++)
        {
            sum1+=arr[i];
        }
        
        cout<<sum-2*sum1<<"\n";
	}
	return 0;
}
