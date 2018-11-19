#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;
typedef long long LL;

int hav[16],n,k,a,b,c,d,ok=0;
void dfs(int x,int y,int a,int b,int c,int d){
	if(x==16){
		if(y&&a<=y/2&&b<=y/2&&c<=y/2&&d<=y/2)
			ok=1;
		return;
	}
	dfs(x+1,y,a,b,c,d);
	if(hav[x]){
		if(x&8)a++;
		if(x&4)b++;
		if(x&2)c++;
		if(x&1)d++;
		dfs(x+1,y+1,a,b,c,d);
	}
}

int main(){
	
	int i,a,b,c,d;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		a=b=c=d=0;
		scanf("%d",&a);
		if(k>1)scanf("%d",&b);
		if(k>2)scanf("%d",&c);
		if(k>3)scanf("%d",&d);
		hav[a*8+b*4+c*2+d]=1;
	}
	dfs(0,0,0,0,0,0);
	if(ok)puts("YES");
	else puts("NO");

	return 0;
}
