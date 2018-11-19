#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chkmax(T& a,T b){return a<b?a=b,1:0;}
template<class T> inline bool chkmin(T& a,T b){return a>b?a=b,1:0;}
template<typename T> inline T& read(T& x){
	static char c; bool flag=0;
	while(!isdigit(c=getchar())) if(c=='-') flag=1;
	for(x=c-'0';isdigit(c=getchar());(x*=10)+=c-'0');
	if(flag) x=-x;
	return;
}
int n;
char s[5],ss[5];
bool x0,x1;
int main(){
#ifndef ONLINE_JUDGE
	freopen("exec.in","r",stdin);
	freopen("exec.out","w",stdout);
#endif
	scanf("%s",s);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",ss);
		if(ss[0]==s[0]&&ss[1]==s[1]) puts("YES"),exit(0);
		if(ss[1]==s[0]) x1=1; if(ss[0]==s[1]) x0=1;
		if(x0&&x1) puts("YES"),exit(0);
	}
	puts("NO");
	return 0;
}
