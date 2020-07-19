//https://www.codechef.com/problems/ONP

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
	    stack<char>st;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(')
	        {}
	        else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='^')
	        {
	            st.push(s[i]);
	        }
	        else if(s[i]==')')
	        {
	            cout<<st.top();
	            st.pop();
	        }
	        else
	        {
	            cout<<s[i];
	        }
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
