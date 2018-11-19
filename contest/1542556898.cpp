#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int i,h,m,s,x,y,ii,lim;
	scanf("%d%d%d%d%d",&h,&m,&s,&x,&y);
	m/=5,s/=5;if(!m) m=12;
	if(!s) s=12;
	lim=y<x?y+12:y;
	for(i=x;i<=lim;++i) {
		if(i>=13) ii=i%12;else ii=i;
		if(i==lim) break;
		if(ii<=h&&ii+1>h) break;
		if(ii<=m&&ii+1>m) break;
		if(ii<=s&&ii+1>s) break;
	}
	if(i==lim) {
		puts("YES");
		return 0;
	}
	lim=(y>x)?y-12:y;
	for(i=x;i>=lim;--i){
		if(i<=1) ii=i+12;else ii=i;
		if(i==lim)  break;
		if(ii>h&&ii-1<=h) break;
		if(ii>m&&ii-1<=m) break;
		if(ii>s&&ii-1<=s) break;
	}
	if(i==lim) {
		puts("YES");
		return 0;
	}
	puts("NO");
}