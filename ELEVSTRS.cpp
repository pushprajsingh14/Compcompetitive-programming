//https://www.codechef.com/problems/ELEVSTRS

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
	    float n,v1,v2;
	    cin>>n>>v1>>v2;
	    float stair=(sqrt(2)*n)/v1;
	    float elev=(2*n)/v2;
	    if(stair<elev)
	    cout<<"Stairs"<<endl;
	    else
	    cout<<"Elevator"<<endl;
	}
	return 0;
}
