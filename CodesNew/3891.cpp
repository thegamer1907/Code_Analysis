#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define maxn 100005
#define LL long long
using namespace std;
LL a[maxn],sum,maxk = -1;

int main(){
	int N;
	scanf("%d",&N);
	for(int i = 1;i <= N;i++){
		scanf("%lld",&a[i]);
		sum += a[i];
		maxk = max(maxk,a[i]);
	}
	//hahaha
	maxk = maxk;
	printf("%lld",max(maxk,(sum+N-2)/(N-1)));
	return 0;
}