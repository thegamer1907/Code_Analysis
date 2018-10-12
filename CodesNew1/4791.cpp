#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int N=510000;
int n,ary[N],Max;
int calc(int x){
	int i=1,j=x+1,cnt=0;
	while(1){
		if(i>x){
			Max=max(Max,cnt);
			return -1;
		}
		if(j>n){
			Max=max(Max,cnt);
			return 1;
		}
		if(ary[i]*2<=ary[j])
			i++,j++,cnt++;
		else
			j++;
	}
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&ary[i]);
	std::sort(ary+1,ary+n+1);
	int L=0,R=n;
	Max=0;
	while(L<R-1){
		int M=(L+R)/2;
		if(calc(M)>0)R=M;
		else L=M;
	}
	printf("%d\n",n-Max);
    return 0;
}

