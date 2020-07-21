//https://www.codechef.com/problems/MAXCOUNT


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10001] = {0};
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a[temp]++;
        }
        temp = a[1];
        int index = 1;
        for (int i = 2; i < 10001; i++)
        {
            if (a[i] > temp)
            {
                temp = a[i];
                index = i;
            }
        }
        cout << index << " " <<temp << endl;
    }
}
