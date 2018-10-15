#include<bits/stdc++.h>
using namespace std;
long long n;
long long lib[2000015];
long long a[1000015];
long long b[1000015];
int main()
{
	cin>>n;
	for(long long i=1; i<=n; i++)
		scanf("%d",&lib[i]);
	sort(lib+1,lib+n+1);
	long long ans=n;
	long long tot1=0,tot2=0;
	tot1=n/2;
	tot2=n-n/2;
	for(long long i=1; i<=tot1; i++)
		a[i]=lib[i];
	for(long long i=1; i<=tot2; i++)
		b[i]=lib[i+tot1];
//	for(int i=1; i<=tot1; i++)cout<<a[i]<<" ";
//	cout<<endl;
//	for(int r=1; r<=tot2; r++)cout<<b[r]<<" ";
//	cout<<endl;
	long long pos1=tot1,pos2=tot2;
	while(pos1>0&&pos2>0)
	{
		if(2*a[pos1]<=b[pos2])
		{
			pos1--;
			pos2--;
			ans--;
		}
		else pos1--;
	}
	cout<<ans;
}


