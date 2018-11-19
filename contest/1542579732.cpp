#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
inline void in(int &ans)
{
    ans=0;bool p=false;char ch=getchar();
    while((ch>'9' || ch<'0')&&ch!='-') ch=getchar();
    if(ch=='-') p=true,ch=getchar();
    while(ch<='9'&&ch>='0') ans=ans*10+ch-'0',ch=getchar();
    if(p) ans=-ans;
}
int a[100010];
int map[1000];
int main()
{
	int n,m,k;
	in(n),in(m);
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)	
			in(k),a[i]<<=1,a[i]+=k;
		for(int j=0;j<=20;++j)
			if((j&a[i])==0)
				map[j]++;
	}
	for(int i=1;i<=n;++i)
		if(map[a[i]]>0)
		{
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}
