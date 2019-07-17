#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

long long n,m,k;
long long a[100010];
int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=0;i<m;i++){
		scanf("%lld",&a[i]);
	}
	long long pos=k;
	int weizhi=0;
	long long ans=0;
	while(weizhi!=m){
		if(a[weizhi]>pos){
			long long xx=a[weizhi]-pos;
			xx/=k;
			pos+=k*xx;
			if(pos<a[weizhi]) pos+=k;
			continue;
		}
		long long tt=pos;
		while(weizhi!=m&&a[weizhi]<=pos){
			weizhi++; tt++;
		}
		ans++; pos=tt;
	}
	cout<<ans;
	return 0;
}