#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, t, a[30002];

void graf(int p)
{
	if(p==t)
		cout<<"YES"<<endl;
	else if(p<n)
		graf(p+a[p]);
	else
		cout<<"NO"<<endl;
	return;
}

int main()
{
	cin>>n>>t;
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
	}
	graf(1);
	return 0;
}