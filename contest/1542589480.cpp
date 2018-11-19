#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
using namespace std;
const int maxn=105,maxm=5;
int n;
char a[maxm],b[maxn][maxm];
void read(int &x)
{
	char ch;
	x=0;
	int F=0;
	ch=getchar();
	while(!isdigit(ch))
	  {
	  	if(ch=='-') F=1;
	  	ch=getchar();
	  }
	while(isdigit(ch))
	  {
	  	x=x*10+ch-'0';
	  	ch=getchar();
	  }
	if(F) x=-x;
	return;
}
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	scanf("%s",a+1);
	read(n);
	for(int i=1;i<=n;i++) scanf("%s",b[i]+1);
	int ok=0;
	for(int i=1;i<=n;i++)
	  if(strcmp(a+1,b[i]+1)==0)
	    ok=1;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=n;j++)
	    if(b[i][2]==a[1] && b[j][1]==a[2])
	      ok=1;
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}
