//https://www.codechef.com/problems/DIVIDING

#include <bits/stdc++.h>
using namespace std;

int main() {
    //your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,sum=0,n;
    cin>>t;
    long long int res=t*(t+1)/2;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        sum+=n;
    }
    if(sum==res)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;
}
