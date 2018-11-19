#include<bits/stdc++.h>
using namespace std;
#define pc(x) putchar(x)
namespace ib {char b[100];}
inline void pi(int x){
	if(x==0) {pc(48); return;}
	if(x<0) {pc('-'); x=-x;}
	char *s=ib::b;
	while(x) *(++s)=x%10,x/=10;
	while(s!=ib::b) pc((*(s--))+48);
}
inline void ri(int &x){
	x=0; static char c; bool t(0);
	while(c=getchar(),c<'0'||c>'9') if(c=='-') t=1; else t=0;
	do x=(x<<1)+(x<<3)+c-'0'; while(c=getchar(),c>='0'&&c<='9');
	if(t) x=-x;
}
int a[200024][10];
bool vis[1<<10];
int main(){
	//freopen("0.in","r",stdin);
	int i,j,n,k; ri(n); ri(k);
	for(i=1;i<=n;++i){
		int key=0;
		for(j=1;j<=k;++j){
			ri(a[i][j]);
			key=key*2+a[i][j];
		}
		vis[key]=1;
	}
	bool flag=0;
	for(i=0;i<(1<<k);++i)
	for(j=0;j<(1<<k);++j) if(vis[i]&&vis[j]&&(i&j)==0) flag=1;
	if(flag) puts("YES"); else puts("NO");
	return 0;
}

