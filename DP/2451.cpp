#include <bits/stdc++.h>
using namespace std;

long long int r[100005],wi[100005]={1},m=1000000007;

int main()
{
	long long int n,i,k,a,b;
	cin >> n >> k;
	if(k==1)
		wi[1]=1;
	r[1]=1;
	for(i=2;i<100004;i++)
	{
		if(i-k>=0)
			wi[i]=(r[i-k]+wi[i-k])%m;
		r[i]=(r[i-1]+wi[i-1])%m;
	}
	r[1]=r[1]+wi[1];
	for(i=2;i<100004;i++)
		r[i]=(r[i]+wi[i]+r[i-1])%m;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		cout << (r[b]-r[a-1]+2*m)%m << endl;
	}
	return 0;
}