#include <bits/stdc++.h>
using namespace std;

vector <long long> base;
vector <long long> price;
long long n;
long long s;

long long solve(long long k) {
	for(int i=0; i<n; ++i) {
		long long num=base[i]+(i+1)*k;
		price.push_back(num);
	}
	sort(price.begin(), price.end());
	long long sum=0;
	for(int i=0; i<k; ++i) {
		sum=sum+price[i];
	}
	return sum;
}

int main() {
	scanf("%lld %lld", &n, &s);
	for(int i=0; i<n; ++i) {
		long long num;
		scanf("%lld", &num);
		base.push_back(num);
	}
	long long left=0, right=n, mid=0;
	long long cost=0;
	while(left<right) {
		mid=ceil((left+right)/2.0);
		long long n1=solve(mid);
		price.clear();
		if(n1>s) {
			right=mid-1;
		}
		else {
			cost=n1;
			left=mid;
		}
	}
	printf("%lld %lld\n", left, cost);
	return 0;
}