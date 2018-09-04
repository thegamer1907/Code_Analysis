#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, k;
	cin >> n >> m >> k;
	long long int left = 1;
	long long int right = n*m;
	while(left < right){
		long long int mid = (left+right)/2;
		long long int count = 0;
		for(long long int i = 1; i <= m; i++){
			long long int minX = mid/i;
			count += min(n, minX);
		}
		// cout << mid << " " << count << "\n";
		if(count < k){
			left = mid+1;
		}
		else{
			right = mid;
		}
	}
	cout << right << "\n";
	return 0;
}