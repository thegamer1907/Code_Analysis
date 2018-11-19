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
int main(){
	//freopen("0.in","r",stdin);
	int i,h,m,s,t1,t2; ri(h) ;ri(m); ri(s); ri(t1); ri(t2);
	bool f1,f2,f3;
	if(t1>t2) swap(t1,t2);
	if(h>=t1&&h<t2) f1=1; else f1=0;
	if(m>=t1*5&&m<t2*5) f2=1; else f2=0;
	if(s>=t1*5&&s<t2*5) f3=1; else f3=0;
	if(f1==f2&&f1==f3) puts("YES");
	else puts("NO");
	return 0;
}

