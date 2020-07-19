//https://www.codechef.com/problems/RIGHTRI

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //your code goes here
    long double x1,x2,x3,y1,y2,y3;
    int n,count=0;
    cin >> n;
    while (n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int a=pow(y2-y1,2)+pow(x2-x1,2);
        int b=pow(y3-y2,2)+pow(x2-x3,2);
        int c=pow(y3-y1,2)+pow(x1-x3,2);
        if (a==b+c||b==a+c || c==a+b)
        {
           count++;
        }
    }
    cout << count << endl;
}
