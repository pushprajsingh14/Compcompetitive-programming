//https://www.codechef.com/problems/PERMUT2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin>>n;
	
	while(n>0){
	    
	    long a[n+1], b[n+1];
	    long x;
	    
	    for(long i=1; i<=n; i++)
	    {
	        cin>>x;
	        a[i] = x;
	        b[a[i]] = i;
	    }
	    
	    bool flag = true;
	    
	    for(long i=1; i<=n; i++)
	    {
	        if(a[i]!=b[i]) {
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag) 
	    cout<<"ambiguous"<<endl;
	    else 
	    cout<<"not ambiguous"<<endl;
	    
	    cin>>n;
	}
	return 0;
}
