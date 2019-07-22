#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int maxn=1e5+100;
const int inf=0x3f3f3f3f;
LL a[maxn];
int main()
{
	LL n,m,k,cha,nowpage,ans=0;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++)scanf("%lld",&a[i]);
	nowpage=a[1]/k; nowpage*=k; nowpage++;
	int pos=1;cha=0;
	while(1)
	{
		ans++;	
		LL nowcha=cha;	
		if(a[pos]-cha>=nowpage+k){
			nowpage+=k;
		}
		for(;pos<=m;pos++)
		{
			if(a[pos]-nowcha>=nowpage+k)break;
			cha++;
		}
		if(pos>m)break;
	}
	cout<<ans<<endl;
}