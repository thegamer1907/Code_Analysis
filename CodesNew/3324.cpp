#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int A[105];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=0;
	int mm=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];
		mm=max(mm,A[i]);
	}
	int min_=0,max_=0;
	min_=max(mm,(sum+m+n-1)/n),max_=mm+m;
	printf("%d %d\n",min_,max_);
}