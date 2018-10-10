#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,i;
	
	long int l;
	double res0,res1,res2;
	double res2a;
	cin >> n;
	cin >> l;
	// long long float d;
	long int a[n];

	for (i=0;i<n;++i) {
		cin >> a[i];
	}

	sort(a,a+n);

	res0 = l - a[n-1];
	res1 = a[0] - 0;



	for (i=(n-1);i>=1;--i) {
		a[i] = a[i] - a[i-1];
	}
	a[0] = 0;

	sort(a,a+n);

	res2a = a[n-1];
	res2 = res2a*0.5;



	if(res0>=res1 && res0>=res2) 
	{
		cout<<fixed<<setprecision(10)<<res0;
	}
	else if(res1>=res0 && res1>=res2) 
	{
		cout<<fixed<<setprecision(10)<<res1;
	}
	else if(res2>=res0 && res2>=res1) 
	{
		cout<<fixed<<setprecision(10)<<res2;
	}
	return 0;
}