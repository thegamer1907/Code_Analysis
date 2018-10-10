#include <bits/stdc++.h>
using namespace std;
long long n,s;
long long ar[100001];

vector<long long> tmp;
long long calc(long long x){
	tmp.clear();
	for (long long i=1;i<=n;i++){
		tmp.push_back(i*x+ar[i]);
	}
	sort(tmp.begin(),tmp.end());
	long long cost = 0;
	long long idx=0;
	while (idx<x)
		cost+=tmp[idx++];
	return cost;
}
int main() {
	
	scanf("%lld%lld",&n,&s);
	for (int i=1;i<=n;i++){
		scanf("%d",&ar[i]);
	}
	long long low = 0,high=n;
	while (low<high){
		long long md=(low+high+1)/2;
		if (calc(md)<=s)
		low=md;
		else
		high=md-1;
	}
	printf("%lld %lld\n",low,calc(low));
	return 0;
}