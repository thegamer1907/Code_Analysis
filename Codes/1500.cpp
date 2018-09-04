#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

vector<long long> a;
long long n, s;
bool go(long long k){
	vector<long long> b;
	for (long long i = 0; i < a.size(); i++){
		b.push_back(a[i] + (i + 1)*k);
	}
	sort(b.begin(), b.end());
	long long sum = 0;
	for (long long i = 0; i < k; i++){
		sum += b[i];
		if (sum > s)
			return false;
	}
	return true;
}
int main(){
	scanf("%lld %lld", &n, &s);
	for (long long i = 0; i < n; i++){
		long long x;
		scanf("%lld", &x);
		a.push_back(x);
	}

	long long left = 0;
	long long right = n;
	long long ans = 0;
	while (left <= right){
		long long mid = (left + right) >> 1;
		if (go(mid)){
			ans = mid;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	vector<long long> b;
	for (long long i = 0; i < a.size(); i++){
		b.push_back(a[i] + (i + 1)*ans);
	}
	sort(b.begin(), b.end());

	long long ans_sum = 0;
	for (long long i = 0; i < ans; i++){
		ans_sum += b[i];
	}
	printf("%lld %lld",ans,ans_sum);
	return 0;
}