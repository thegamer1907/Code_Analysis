#include<cstdio>
#include<cstring>
#include<algorithm>
#define LL long long
#define clr(x,i) memset(x,i,sizeof(x))
using namespace std;
const int N=1005;
int f[140],s[140],n;
char x[4],str[4];
int main()
{
	scanf("%s%d",x,&n);
	bool ff=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%s",str);
		if(str[0]==x[0]&&str[1]==x[1])ff=1;
		f[str[1]-'0']=1;
		s[str[0]-'0']=1;
	}
	if((f[x[0]-'0']&&s[x[1]-'0'])||ff)printf("YES");
	else printf("NO");
	return 0;
}