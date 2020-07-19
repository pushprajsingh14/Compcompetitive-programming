//https://www.codechef.com/problems/PRIME1

#include <bits/stdc++.h>
using namespace std;

int main()
{
	short t;
	cin>>t;
	for (int i=0;i< t;i++)
	{
		int n, m;
		cin>>n>>m;
		if(n==1)
			n++;
		for (int j=n;j<=m;j++)
		{
			int flag=0;
			for (int k=2;k<=floor(sqrt(j));k++)
			{
				if ((j%k)==0)
				{
					flag=1;
					break;
				}
			}
			if (flag==0)
			{
				cout<<j<<endl;
			}
		}
		cout<<endl;
	}

	return 0;
}
