#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int i,j,k,h,m,s,t1,t2,a[11],b1,b2,c[51001];
int main(){
	memset(c,0,sizeof(c));
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);h%=12;t1%=12;t2%=12;
	a[1]=3600*h+60*m+s;a[2]=720*m+12*s;a[3]=720*s;c[a[1]]=c[a[2]]=c[a[3]]=1;
	b1=3600*t1;b2=3600*t2;
	if (c[b1]||c[b2]){
		puts("NO");return 0;
	}
	for (i=b1,k=1;k&&i!=b2;i=(i+1)%43200)
	 if (c[i]) k=0;
	if (k){
		puts("YES");return 0;
	}
	for (i=b2,k=1;k&&i!=b1;i=(i+1)%43200)
	 if (c[i]) k=0;
	if (k){
		puts("YES");return 0;
	}
	puts("NO");
	return 0;
}