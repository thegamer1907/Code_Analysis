#include<bits/stdc++.h>
using namespace std;
const int N=101;
char a[N][3],s[3];
int n;
int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		scanf("%s",a[i]);
	for(int i=1;i<=n;++i)
	if(s[0]==a[i][0]&&s[1]==a[i][1])
	{
		puts("YES");
		return 0;
	}
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n;++j)
	{
		bool flag=0;
		if(a[i][1]==s[0]&&a[j][0]==s[1])
		flag=1;
		if(flag)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}