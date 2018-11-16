#include<bits/stdc++.h>

using namespace std;

int n,cnt;
char a[100];
long ans;

int main()
{
	scanf("%d\n",&n);
	for(long i=1;i<=n;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]==a[i-1])
		{
			cnt++;
		}
		else
		{
			ans+=max(0,cnt-1);
			cnt=1;
		}
	}
	ans+=max(0,cnt-1);
	printf("%d\n",ans);
	return 0;
 } 