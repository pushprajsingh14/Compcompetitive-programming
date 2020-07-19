//question: https://www.codechef.com/problems/CIELAB

#include <iostream>
using namespace std;

int main() {
	// your code goes here
int a,b;
cin>>a>>b;
a=a-b;
if(a%10==0 ||a==1)
a++;
else
a--;
cout<<a;
	return 0;
}
