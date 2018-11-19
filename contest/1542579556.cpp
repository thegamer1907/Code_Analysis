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
string s,a[1000];
int main(){
	//freopen("0.in","r",stdin);
	int i,j,n,flag=0; cin>>s; ri(n);
	for(i=1;i<=n;++i) cin>>a[i];
	for(i=1;i<=n;++i) if(a[i]==s) flag=1;
	for(i=1;i<=n;++i)
	for(j=1;j<=n;++j) if(a[i][1]==s[0]&&a[j][0]==s[1]) flag=1;
	if(flag==1) puts("YES"); else puts("NO");
	return 0;
}

