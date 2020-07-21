//https://www.codechef.com/problems/CARVANS

#include<bits/stdc++.h>

using namespace std;


int main()
{
    long t,n,a[10000000],b[10000000],s,i;
    cin>>t;
    while(t>0)
    {
        s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
           cin>>a[i];
           b[i]=a[i]; 
            
        }
    
        for(i=0;i<n-1;i++)
        {
             if(b[i+1]>b[i])
             {
                 b[i+1]=b[i];
             }
     
        }     
            
        for(i=0;i<n;i++)    
             
        {     if(a[i]==b[i])
             {
                 s++;
             }
        
        }
            
            
    
        cout<<s<<endl;
        t--;
    }
    
  return 0;    
    
}
