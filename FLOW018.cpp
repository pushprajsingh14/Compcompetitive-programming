//https://www.codechef.com/problems/FLOW018

#include <iostream>
using namespace std;
int fac(int n)
{
    int fact=1;
    int i;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        int num,p;
        cin>>num;
        p=fac(num);
        cout<<p<<endl;
    }
}
