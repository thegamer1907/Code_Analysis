#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int n,k,i,j,x,y;
	cin>>n>>k;
	i=0;
	j=i+1;
	int flag=0;
	while(flag==0)
	{
	    //j=(j%32);
	    x=pow(2,j);
	    y=pow(2,i);
	    if((k-y)%x==0)
	    {
	        flag=1;
	    }
	    i+=1;
	    j+=1;
	    //cout<<j<<" ";
	}
	cout<<i;
}
