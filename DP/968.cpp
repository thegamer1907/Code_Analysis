#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,extra0=0,extra0max=-1,count1=0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a==1)
		{
			count1++;
			if(extra0>0)
				extra0--;
				
		}
		else
		{
			extra0++;
			extra0max=max(extra0max,extra0);
		}
	}
	cout<<count1+extra0max<<endl;
	return 0;
}