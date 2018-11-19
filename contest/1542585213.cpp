#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<bitset>
using namespace std;
typedef long long LL;
int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}
char get() {
	char c;
	while ((c=getchar())<'a'||'z'<c);
	return c;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("A.in","r",stdin);
	freopen("A.out","w",stdout);
#endif
	char a=get(),b=get(),c,d;
	int n=gi();
	bool o1[1000]={},o2[1000]={};
	while (n--) {
		c=get(),d=get();
		if (a==c&&b==d) puts("YES"),exit(0);
		o1[c]=true;
		o2[d]=true;
	}
	puts(o1[b]&&o2[a]?"YES":"NO");
	
	return 0;
}
