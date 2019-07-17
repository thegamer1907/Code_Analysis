#include<bits/stdc++.h>
#define ll long long
#define N 10005 
using namespace std;
int read(int &x){
	int dat=0;char chc=getchar();bool oko=0;
	while(chc<'0'||chc>'9'){if(chc=='-')oko=1;chc=getchar();}
	while(chc>='0'&&chc<='9'){dat=dat*10+chc-'0';chc=getchar();}
	x=oko?-dat:dat;return x;
}
int n,m,k,p[N],x,ans=1,dead,dd;
int main(){
	read(n),read(m),read(k);
	for(int i=1;i<=m;i++){
		read(p[i]);
	}x=p[1]/k; 
	for(int i=1;i<=m;i++){
		again:
		if(p[i]-dd>=x*k+1&&p[i]-dd<=x*k+k)dead++;
		else{
			if(!dead){x--;goto again;}
			ans++,x++;dd+=dead;dead=0;goto again;
		}
	}
	printf("%d\n",ans);
	return 0;
}
/*
10 4 5
3 5 7 10

*/