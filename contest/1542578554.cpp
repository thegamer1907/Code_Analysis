#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<queue>
#define inc(i,l,r) for(int i=l;i<=r;i++)
#define dec(i,l,r) for(int i=l;i>=r;i--)
#define link(x) for(edge *j=h[x];j;j=j->next)
#define mem(a) memset(a,0,sizeof(a))
#define inf 1e9
#define ll long long
#define succ(x) (1<<x)
#define lowbit(x) (x&(-x))
#define NM 105
using namespace std;
int read(){
	int x=0,f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	return x*f;
}


bool a[NM][5][2];int n;
char s[10],t[10];
bool x,y;
int main(){
//	freopen("data.in","r",stdin);
	scanf("%s",s);
	scanf("%d",&n);
	inc(i,1,n){
		scanf("%s",t);
		inc(j,0,1)
		inc(k,0,1)if(t[j]==s[k])a[i][j][k]++;
	}
	inc(i,1,n){
		if(a[i][0][0]&&a[i][1][1])x=y=true;
		if(a[i][1][0])x=true;
		if(a[i][0][1])y=true;
	}
	printf("%s\n",x&&y?"YES":"NO");
	return 0;
}
