#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int arr[n];
	int maxbench = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		maxbench = max(arr[i], maxbench);
	}
	int k_min, k_max = m+maxbench, k = m;
	sort(arr, arr+n);
	for(int i=n-2; i>=0; i--){
		k -= (maxbench-arr[i]);
		if(k<=0)
			break;
	}
	if(k<=0){
		k_min = maxbench;
	}
	else{
		if(k%n)
			k_min = k/n+1+maxbench;
		else
			k_min = k/n+maxbench;
	}
	cout << k_min << ' ' << k_max;
	return 0;
}
