// https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int amt=0;
	float bal=0;
	cin>>amt>>bal;
	if((amt%5==0)&&(amt<(bal-0.50))){
	    cout<<bal-amt-0.50;
	}
	else{
	    cout<<bal;
	}
	return 0;
}
