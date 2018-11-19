#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
#include<vector>
#include<ctime>
#define ll long long
#define pr(x) cerr<<#x<<"="<<x<<endl
using namespace std;
void win()
{
	printf("YES\n");
	exit(0);
}
char ch[10000],s[10000];
int n,i,a,b;
int main()
{
	scanf("%s",ch);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",s);
		if (s[0]==ch[0]&&s[1]==ch[1]) win();
		if (s[1]==ch[0]) a=1;
		if (s[0]==ch[1]) b=1; 
	}
	if (a&&b) win();
	printf("NO\n");
	return 0;
}