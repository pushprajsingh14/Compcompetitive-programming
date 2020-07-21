//https://www.codechef.com/problems/CANDLE

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10];
	int i,j,t,min;
	cin>>t;
	while(t--)
	{
		for(i=0;i<10;i++)
			cin>>arr[i];
		j=1;
		min=arr[1];
		for(i=2;i<10;i++)
		{
			if(arr[i]<min)
			{
				j=i;
				min=arr[i];
			}
				
		}
		
		if(arr[0]<min)
		{
			min=arr[0];
			j=0;
		}
		if(j==0)
		{
			cout<<1;
			for(i=0;i<=min;i++)
			cout<<0;
		}
		else
		{
			for(i=0;i<=min;i++)
			cout<<j;
		}
		cout<<endl;
	}
   	return 0;
}
