#include "bits/stdc++.h"
using namespace std;
long long  n;
bool ok(long long  k){
	long long  cnt = 0,candies = n;
	while(candies > 0){
		if(candies >= k){
			cnt+=k;
			candies -= k;
		}
		else{
			cnt+=candies;
			candies = 0;
		}
		if(candies >= 10){
			candies -= (candies/10);
		}
	}
	if(cnt*2 >= ((n)))
		return true;
	else
		return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin >> n;
	if(n==1){
		cout << "1" << endl;
		return 0;
	}
	long long  lo=1,high=n,ans=0;
	while(lo<=high){
		long long mid= (lo+high)/2;
	//	cout << "mid = " << mid  << " " << lo << " " << high << endl;
		if(ok(mid)){
			ans = mid;
			high = mid-1;
		}
		else
			lo=mid+1;
	}
	cout << ans << endl;
	return 0;
}