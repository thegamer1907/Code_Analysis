#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(i)
			a[i]+=a[i-1];
	}
	int x=0;
	long long y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]*3==a[n-1])
			x++;
		if(a[i]*3==a[n-1]*2&&x)
		{
			y+=x;
		}
	}
	if(a[n-1])
		cout << y << endl;
	else
		cout << (long long)(x-2)*(x-1)/2 << endl;
	return 0;
}
