#include <bits/stdc++.h>
using namespace std;
long long res(int k,int *arr,int n)
{
	long long b[n+1];
	for(int i=1;i<=n;i++)
		b[i]=arr[i] + i*(long long)k;
	sort(b+1,b+n+1);
	long long ans=0;
	for(int i=1;i<=k;i++)
		ans+=b[i];
	return ans;
}
int main(void)
{
	int n,S;
	scanf("%d %d",&n,&S);
	int arr[n+1];
	for(int i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	int l=0;
	int r=n+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(res(mid,arr,n)<=S)
			l=mid;
		else
			r=mid;
	}
	printf("%d %lld\n",l,res(l,arr,n));
	return 0;
}