#include<bits/stdc++.h>
 
using namespace std;
int a[1000005];
int b[1000005];
long long s = INT_MAX;
int main()
{
	int n, k;
	cin >>n >>k;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[i] = b[i-1] + a[i];
	}
	int p = 0;
	for (int i = k; i <= n; ++i)
	{
		if(s > b[i] - b[i-k]) {
			p = i-k+1;
			s = b[i]-b[i-k];
		}
	}
	cout<<p;

}