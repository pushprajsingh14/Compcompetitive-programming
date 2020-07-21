//https://www.codechef.com/problems/DCE05

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,d;
		long long int j=0;
		cin>>n;
		while(1)
		{
			d=pow(2,j);
			if(n/d>=2)
			{
				j++;
			}
			else
			{
				cout<<d<<endl;
				break;
			}
		}
	}
}
