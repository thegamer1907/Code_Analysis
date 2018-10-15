#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=100000+5;
typedef long long LL;
int n;
LL a[maxn];
bool check(LL turn){
	LL delt=0;
	for(int i=1;i<=n;i++)delt+=turn-a[i];
	return delt>=turn;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%I64d",&a[i]);
	nth_element(a+1,a+n,a+n+1);
	LL L=a[n],R=a[n]*n,ans;
	while(L<=R){
		LL mid=L+R>>1;
		if(check(mid))ans=mid,R=mid-1;
		else L=mid+1;
	}
	printf("%I64d",ans);
	return 0;
}