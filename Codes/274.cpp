#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N=110000;
bool calc(int sum[],int a,int x){
	if(a<=sum[x])return true;
	return false;
}
int main(){
	int ary[N],sum[N]={},n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",ary+i),sum[i]=sum[i-1]+ary[i];
	scanf("%d",&m);
	while(m--){
		int x;
		scanf("%d",&x);
		int L=0,R=n;
		while(L<R-1){
			int M=(L+R)/2;
			if(calc(sum,x,M))R=M;
			else L=M;
		}
		printf("%d\n",R);
	}
    return 0;
}

