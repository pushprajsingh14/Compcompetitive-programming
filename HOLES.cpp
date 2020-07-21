//https://www.codechef.com/problems/HOLES

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
	    string word;
	    cin>>word;
	    int count=0;
	    for(int i=0;i<word.length();i++)
	    {
	        if(word[i]=='A' || word[i]=='D' || word[i]=='O' || word[i]=='P' || word[i]=='R' || word[i]=='Q')
	        count++;
	        if(word[i]=='B')
	        count+=2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
