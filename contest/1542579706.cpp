#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+20,M=14*3600,inf=0x3f3f3f3f;
int a[N];
map<int,int> mp;
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	mp.clear();
	for(int i=1;i<=n;i++)
	{
		int s=0,x;
		for(int j=1;j<=k;j++)
		{
			scanf("%d",&x);
			s=s*2;
			if(x)
				s++;
		}
		//cout<<s<<' ';
		mp[s]++;
	}
	bool flag=false;
	if(mp[0])
		flag=true;
	for(int i=1;i<=15;i++)
	{
		if(mp[i])
		{
			for(int j=1;j<=15;j++)
			{
				int res=j&i;
				if(res==0&&mp[j])
				{
					flag=true;
				//	cout<<'#';
				}
			}
		}
	}
	if(flag)
		puts("YES");
	else
		puts("NO");
	
	return 0;
}