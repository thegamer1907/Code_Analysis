#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	int count=0;
	int i;
	int A[10000];
	for(i=1;i<=a;++i)
	{
		cin>>A[i];
	}
	c=A[b];
	for(i=1;i<=a;++i)
	{
		if(A[i]>=c&&A[i]>0)
			count++;
	}
	
	cout<<count;
}