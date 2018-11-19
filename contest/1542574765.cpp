#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chkmax(T& a,T b){return a<b?a=b,1:0;}
template<class T> inline bool chkmin(T& a,T b){return a>b?a=b,1:0;}
int h,m,s,t1,t2,sum;
int main(){
#ifndef ONLINE_JUDGE
	freopen("exec.in","r",stdin);
	freopen("exec.out","w",stdout);
#endif
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1>t2) swap(t1,t2);
	if(h>=t1&&h<t2) ++sum;
	if((m/5)>=t1&&(m/5)<t2) ++sum;
	if((s/5)>=t1&&(s/5)<t2) ++sum;
	if(sum==0||sum==3) puts("YES");
	else puts("NO");
	return 0;
}