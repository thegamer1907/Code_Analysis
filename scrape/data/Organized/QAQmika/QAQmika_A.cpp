#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
#define ull unsigned long long 
const int maxn = 1e5+10;
int ans;
ull index,pre;
ull m,k; int n;
ull a[maxn];
int main()
{
	scanf("%llu%d%llu",&m,&n,&k);
	for(int i=1;i<=n;i++) scanf("%llu",&a[i]);
    index=k;
    int temp=0;ull t1;
	while(true)
	{
		if(pre>=n) break;
		for(int i=pre;i<=n;i++)
		{
			if(i==n||(a[i]<=index&&a[i+1]>index))
			{
				temp=i; break;
			}
		}
		if(temp==pre)
		{
			t1=a[temp+1]-index;
			if(t1<=k) index+=k;
			else index+=t1/k*k;
		}
		else
		{
			index+=temp-pre;
			pre=temp;
			ans++;
		}
	}	
	printf("%d",ans);
	return 0;
}