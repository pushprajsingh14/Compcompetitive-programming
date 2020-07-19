//https://www.codechef.com/problems/FLOW010

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	char id;
    cin>>id;
    if ((id=='b')||(id=='B'))
        cout<<"BattleShip"<<endl;
    if ((id=='c')||(id=='C'))
        cout<<"Cruiser"<<endl;
    if ((id=='d')||(id=='D'))
        cout<<"Destroyer"<<endl;
    if ((id=='f')||(id=='F'))
        cout<<"Frigate"<<endl;
	}
	return 0;
}
