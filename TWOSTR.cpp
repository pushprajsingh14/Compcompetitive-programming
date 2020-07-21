//https://www.codechef.com/problems/TWOSTR

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
	    string a,b;
	    cin>>a>>b;
	    int count=0;
	    for(int i=0;i<a.length();i++)
	    {
	        if(a[i]=='?')
	        {
	            a[i]=b[i];
	        }
	        else if(b[i]=='?')
	        {
	            b[i]==a[i];
	        }
	        else if(a[i]==b[i])
	        {}
	        else
	        {
	            count=1;
	            break;
	        }
	    }
	    if(count==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
