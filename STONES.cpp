//https://www.codechef.com/problems/STONES

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T,count;
	string S,J;
	cin>>T;
	
	while(T--){
		cin>>J>>S;
		count=0;
		for (int k=0;k<S.length();k++)
		{
			for (int i=0;i<J.length();i++)
			{
				if(S[k]==J[i])
				{
				    count++;
				    break;
				}
			}
		}
		cout<<count<<endl;
	}
}
