//https://www.codechef.com/problems/FLOW011

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sal;
		cin>>sal;
		cout<<fixed<<setprecision(2);
		if(sal<1500)
		{
			cout<<(float)(sal*2)<<endl;
		}
		else
		{
			cout<<(float)(500+(sal*1.98))<<endl;
		}
	}
}https://www.codechef.com/problems/FLOW011
