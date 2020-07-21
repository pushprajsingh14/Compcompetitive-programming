//https://www.codechef.com/problems/ADASCOOL

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
	    int n,m;
	    cin>>n>>m;
	    if((n*m)%2==0)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
