#include<bits/stdc++.h>
#define fr(i,x,y) for(int i=x;i<=y;++i)
#define rf(i,x,y) for(int i=x;i>=y;--i)
using namespace std;
const int N=1e5+10;
char lx[N];
int qz[N];

int main(){
	scanf("%s",lx+1);
	int len=strlen(lx+1);
	int m;scanf("%d",&m);
	fr(i,1,len){
		qz[i]=qz[i-1];
		if(lx[i]==lx[i+1]) qz[i]++;
	}
	fr(i,1,m){
		int l,r;scanf("%d%d",&l,&r);
		printf("%d\n",qz[r-1]-qz[l-1]);
	}
	return 0;
}