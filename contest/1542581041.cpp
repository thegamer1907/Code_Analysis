#include<bits/stdc++.h>
int h,m,s,t1,t2;
bool ed[25];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;t1%=12;t2%=12;
	ed[h*2+(m||s)]=1;
	ed[m/5*2+(s||m%5)]=1;
	ed[s/5*2+bool(s%5)]=1;
	t1*=2,t2*=2;
	bool d1=1,d2=1;
	for(int i=t1;i!=t2;i=(i+1)%24)if(ed[i])d1=0;
	for(int i=t1;i!=t2;i=(i+23)%24)if(ed[i])d2=0;
	puts(d1||d2?"YES":"NO");
	return 0;
}
