#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read(){
	int k=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){k=k*10+ch-'0';ch=getchar();}
	return k*f;
}
inline void write(int x){
	if(x<0)x=-x,putchar('-');if(x>9)write(x/10);
	putchar(x%10+'0');
}
inline void writeln(int x){
	write(x);puts("");
}
int n;
inline bool check(int x){
	int p=n,aa=0,bb=0;
	while(p){
		if(p<x){aa+=p;break;}
		p-=x;aa+=x;
		bb+=p/10;p-=p/10;
	}
	return aa>=bb;
}
signed main()
{
	n=read();
	int l=1,r=n,ans;
	while(l<=r){
		int mid=l+r>>(1ll);
		if(check(mid))r=mid-1,ans=mid;
		else l=mid+1;
	}
	writeln(ans);
	return 0;
}