//https://www.codechef.com/problems/FLOW014

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	double hardness,carbon,tensile;
	while(t--)
	{
	   cin>>hardness>>carbon>>tensile;
        if(hardness>50 && carbon<0.7 && tensile>5600) cout<<10;
        else if(hardness>50 && carbon<0.7) cout<<9;
        else if(carbon<0.7 && tensile>5600) cout<<8;
        else if(hardness>50 && tensile>5600) cout<<7;
        else if(hardness>50) cout<<6;
        else if(carbon<0.7) cout<<6;
        else if(tensile>5600) cout<<6;
        else cout<<5;
        cout<<endl;
	}
	return 0;
}
