#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[105][3];
	int n;
	cin >> n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	int sum1=0,sum2=0,sum3=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==0)
			{
				sum1= sum1+ a[i][j];
			}
			else if(j==1)
			{
				sum2 = sum2 + a[i][j];
			}
			else if(j==2)
			{
				sum3 = sum3 + a[i][j];
			}
		}
	}
	if(sum1==0 && sum2==0 && sum3==0)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}