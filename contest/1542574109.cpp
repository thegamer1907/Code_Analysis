#include <bits/stdc++.h>

using namespace std;
const int MAXN=24;

int h,m,s,t1,t2;
bool can[MAXN+5];

int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12;
	h=h*2+(bool)(m||s);
	m=m/5*2+(bool)(m%5||s);
	s=s/5*2+(bool)(s%5);
	t1%=12; t1*=2;
	t2%=12; t2*=2;
	can[h]=1; can[m]=1; can[s]=1; can[t1]=1; can[t2]=1;
	int i=t1+1;
	while(!can[i]){
		++i;
		if(i>=MAXN) i-=MAXN;
	}
	if(i==t2){ printf("YES\n"); return 0; }
	i=t1-1;
	while(!can[i]){
		--i;
		if(i<0) i=MAXN;
	}
	if(i==t2){ printf("YES\n"); return 0; }
	else printf("NO\n");
	return 0;
}
