//https://www.codechef.com/problems/CHEFARRP

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[100];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int prod=1;
            for(int j=i;j<n;j++)
            {
              sum+=a[j];
              prod*=a[j];
              if(sum==prod)
              {
                count+=1;
              }
            }
        }
        cout<<count<<endl;
    }
}
