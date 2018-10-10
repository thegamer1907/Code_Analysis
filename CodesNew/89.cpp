#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int length;
	int i;
	double x,y;
	double temp=-1.5;
	double a[1010];

	cin >> n;
	cin >> length;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	x=abs(a[1]-0);
	y=abs(a[n]-length);
	for(i=1;i<n;i++)
	{
		a[i]=abs(a[i]-a[i+1]);
		if(temp<a[i]/2)
		{
			temp=a[i]/2;
		}
	}
	double result=max(x, max(temp,y));
	printf("%.10lf",result);
	return 0;
}