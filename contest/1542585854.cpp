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

int x,y,h,m,s;
bool ans;
int main(){
//	freopen("data.in","r",stdin);
	h=read();m=read();s=read();x=read();y=read();
	if(x>y)swap(x,y);
	if(x<=s/5&&x<=m/5&&x<=h&&s/5<y&&m/5<y&&h<y)ans=true;
	if((x>s/5||y<=s/5)&&(x>m/5||y<=m/5)&&(x>h||y<=h))ans=true;
	printf("%s\n",ans?"YES":"NO");
	return 0;
}
