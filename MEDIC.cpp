//https://www.codechef.com/problems/MEDIC

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int yyyy,mm,dd;
	char c;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>yyyy>>c>>mm>>c>>dd;
	    if(mm==4 || mm==6 || mm==9 || mm==11)
	    {
	        cout<<((61-dd)/2)+1<<endl;
	    }
	    else if(mm==2)
	{
	    if(yyyy%400==0 || (yyyy%100!=0 && yyyy%4==0))
	    {
	        cout<<((29-dd)/2)+1<<endl;
	    }
	    else
	    cout<<((59-dd)/2)+1<<endl;
	}
	else
	cout<<((31-dd)/2)+1<<endl;
	}
	return 0;
}
