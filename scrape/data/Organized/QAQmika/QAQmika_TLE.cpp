#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long 
const int maxn = 1e5+10;
int ans;
int del;
int alldel;
int index,pre;
ll m,k; int n;
ll a[maxn];
int main()
{
	scanf("%lld%d%lld",&m,&n,&k);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    index=k;
    int temp;ll t1;
	while(true)
	{
		if(alldel==n) break;
		temp=upper_bound(a+1,a+1+n,index)-a-1;
		if(temp==pre)
		{
			t1=a[temp+1]-a[temp];
			if(t1<=k) index+=k;
			else index+=t1/k*k;
		}
		else
		{
			alldel+=temp-pre;
			index+=temp-pre;
			pre=temp;
			ans++;
		}
	}	
	printf("%d",ans);
	return 0;
}