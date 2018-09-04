#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
char a[1000007];
long long int aa[7];
long long int bb[7];
long long int aaa[7];
int Ok(long long int val,long long int vall)
{
	long long int aaaa=max(val*aaa[0]-aa[0],0LL),bbbb=max(val*aaa[1]-aa[1],0LL),aaaaa=max(val*aaa[2]-aa[2],0LL);
	return aaaa*bb[0]+bbbb*bb[1]+aaaaa*bb[2]<=vall;
}
int main()
{
	scanf("%s",a);
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]=='B')
			aaa[0]++;
		else if(a[i]=='S')
			aaa[1]++;
		else
			aaa[2]++;
	}
	long long int aaaa;
	scanf("%lld %lld %lld",&aa[0],&aa[1],&aa[2]);
	scanf("%lld %lld %lld",&bb[0],&bb[1],&bb[2]);
	scanf("%lld",&aaaa);
	long long int l=0,r=1e14;
	long long int mid;
	while(l<r)
	{
		mid=(l+r+1)/2;
		if(Ok(mid,aaaa))
			l=mid;
		else
			r=mid-1;
	}
	long long int ans=l;
	printf("%lld\n",ans);
	return 0;
}