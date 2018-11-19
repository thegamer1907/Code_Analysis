#include<cstdio>
#include<cstring>
#include<algorithm>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define Rep(i,x) for(int i=head[x];i+1;i=nxt[i])
#define rep2(i,a,b) for(int i=(a);i<(b);i++)
#define ff first
#define ss second
using namespace std;
const int N=200005;
const int inf=1e9+7;
typedef long long ll;
//------------------------------------------head---------------------------------------------------//

char s[N][5];
int main()
{
	scanf("%s",s[0]+1);
	int n;scanf("%d",&n);
	rep(i,1,n)scanf("%s",s[i]+1);int ans=0;
	rep(i,1,n)if(s[i][1]==s[0][1] && s[i][2]==s[0][2])ans=1;
	rep(i,1,n)rep(j,1,n)
	{
		if(s[i][2]==s[0][1] && s[j][1]==s[0][2])ans=1;
	}
	if(ans)puts("YES");
	else puts("NO");
}