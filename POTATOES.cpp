//https://www.codechef.com/problems/POTATOES

#include <iostream>
using namespace std;

int prime(int x){
    int i,count=0;
    for(i=2;i<x;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
        if(count==0)
        return 0;
        else
        return 1;
}

int main() {
	// your code goes here
	int t,i,a,b,sum,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>a>>b;
	    sum=a+b;
	    for(j=1;;j++){
	        a=prime(sum+j);
	        if(a==0)
	        break;
	    }
	    cout<<j<<endl;
	}
	return 0;
}
