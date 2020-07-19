//https://www.codechef.com/problems/CHNGIT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[1000];
	    int count[1000]={};
	    int max=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        count[arr[i]]++;
	        if(count[arr[i]]>max)
	        max=count[arr[i]];
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
