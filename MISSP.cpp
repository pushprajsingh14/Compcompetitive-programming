//https://www.codechef.com/problems/MISSP

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
	    long long int n;
	    cin>>n;
	    long long int doll[100000];
	    long long int pair[100000]={0};
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>doll[i];
	        pair[doll[i]]++;
	        
	    }
	    for(long long int i=0;i<100000;i++)
	    {
	        if(pair[i]%2!=0)
	        {
	        cout<<i<<endl;
	        break;
	        }
	    }
	}
	return 0;
}
