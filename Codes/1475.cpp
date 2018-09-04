//I_F_A
#include "bits/stdc++.h"
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,total;
	cin >> n >> total;
	
	long long arr[n+1],brr[n+1];
	for(long long i=1;i<=n;i++){
		
		cin >> arr[i];
	}
	
	long long ans1 = 0 , ans2 = 0;//Number + Cost
	
	long long left = 1 , right = n;
	
	while(left <= right){
		
		long long mid= (left + right) >> 1;
		
		for(long long i=1;i<=n;i++){
			
			brr[i] = arr[i] + i*mid;
		}
		
		sort(brr+1,brr+n+1);
		
		long long ltotal = accumulate(brr+1,brr+mid+1,0LL);
		
		if(ltotal <= total){
			
			ans1 = mid;
			ans2 = ltotal;
			left = mid + 1;
		}
		else{
			
			right = mid - 1;	
		}
	}
	
	cout << ans1 << " " << ans2 << endl;
}