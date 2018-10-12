#include<bits/stdc++.h>
#define R register
#define S 110
using namespace std;
int a[S];
inline int read(){
	R int f=0;	R char ch=getchar();
	while(ch<48||ch>57) ch=getchar();
	while(ch>47&&ch<58) f=(f<<3)+(f<<1)+(ch^48),ch=getchar();
	return f;
}
int main(){
	R int n=read(),m=read(),s=m,i;
	for(i=1;i<=n;++i) a[i]=read();
	sort(a+1,a+1+n);
	for(i=1;i<n;++i) s-=a[n]-a[i];
	if(s<=0) printf("%d ",a[n]);
	else{
		if(s%n) s=s/n+1;
		else s=s/n;
		printf("%d ",s+a[n]);
	}
	printf("%d",a[n]+m);
	return 0;
}