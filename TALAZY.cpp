//https://www.codechef.com/problems/TALAZY

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	long long int n,b,m;
	while(t--)
	{
		cin>>n>>b>>m;
		long long int ans=0;
		while(n>0){
			ans+=m*((n+1)/2);
			n-=(n+1)/2;
			m*=2;
			ans+=b;
		}
		cout<<ans-b<<endl;
	}
	return 0;
}
