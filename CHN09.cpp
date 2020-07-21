//https://www.codechef.com/problems/CHN09

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
	    int a=0;
	    int b=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='a')
	        a++;
	        else
	        b++;
	    }
	    if(a<=b)
	    cout<<a<<endl;
	    else
	    cout<<b<<endl;
	}
	return 0;
}
