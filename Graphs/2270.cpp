#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, a[2002], b[2002];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int r=i, z=1;
		while(a[r]!=-1)
		{
			z++;
			r=a[r];
		}
		b[i]=z;
	}
	cout<<*max_element(b+1,b+n+1)<<endl;
	return 0;
}