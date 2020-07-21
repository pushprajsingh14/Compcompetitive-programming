//https://www.codechef.com/problems/ERROR

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
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='0')
	        if(s[i+1]=='1')
	        if(s[i+2]=='0')
	        c=1;
	        if(s[i]=='1')
	        if(s[i+1]=='0')
	        if(s[i+2]=='1')
	        c=1;
	    }
	    if(c==1)
	    cout<<"Good"<<endl;
	    else
	    cout<<"Bad"<<endl;
	}
	return 0;
}
