#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int a[maxn];
int main()
{
	#ifdef TEST
		freopen("input.txt","r",stdin);
    #endif
	int T,n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) cin>>a[i];
	int ans=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]>=a[m])
		{
			if(a[i]>0) ans++;
		}
		else break;
	}
	cout<<ans<<endl;
}

