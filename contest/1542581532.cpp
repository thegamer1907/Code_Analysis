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
const int maxn=100005,maxk=10;
int n,k,a[maxn][maxk],b[maxk][maxk][maxk][maxk],s[maxk],ok=0;
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
void run(int i,int p)
{
	if(i>k)
	  {
	  	if(b[s[1]][s[2]][s[3]][s[4]]) ok=1;
	  	return;
	  }
	if(a[p][i]) s[i]=0,run(i+1,p);
	else
	  {
	  	s[i]=0;
	  	run(i+1,p);
	  	s[i]=1;
	  	run(i+1,p);
	  }
	return;
}
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	read(n);read(k);
	for(int i=1;i<=n;i++)
	  {
	  	for(int j=1;j<=k;j++) read(a[i][j]);
	  	b[a[i][1]][a[i][2]][a[i][3]][a[i][4]]=1;
	  }
	for(int i=1;i<=n;i++) run(1,i);
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}
