#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,X,i,temp,count = 0;
	bool cek = true;

	cin>>n>>k;
	for (i = 1;i<=n;i++)
	{
		cin>>X;
		if ((X == 0) and (i==1))
		{
			cek = false;
			break;
		}
		if(i<k and (X!=0))
		{
			count++;
		} 
		if ( i == k)
		{
			temp = X;
		}
		if (X == temp and (X!=0))
		{
			count++;
		}
	}
	if (cek)
	{
	cout<<count<<endl;
	} else
	{
		cout<<0<<endl;
	}
}