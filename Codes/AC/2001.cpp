//Kaori Miyazono, did I reach you ?
//"I can't die because... I have to protect you." -Asuna Yuuki

#include <bits/stdc++.h>
using namespace std;

const int N = 200200;

int n, k;
long long int nums[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	       
	vector< pair<long long int, int> > v;
	for(int i = 0; i < n; i++){
		v.push_back(make_pair(nums[i], i));
	}	
	sort(v.begin(), v.end());
	long long int ans = 0;
	for(int i = 1; i < n - 1; i++){
		if (nums[i] % k == 0){
			int preff = lower_bound(v.begin(), v.end(), make_pair(nums[i] / k, 0)) - v.begin();
			int suff = upper_bound(v.begin(), v.end(), make_pair(nums[i] / k, i - 1)) - v.begin() - 1;
			int one = suff - preff + 1;
			preff = lower_bound(v.begin(), v.end(), make_pair(nums[i] * k, i + 1)) - v.begin();
			suff = upper_bound(v.begin(), v.end(), make_pair(nums[i] * k, n - 1)) - v.begin() - 1;
			int two = suff - preff + 1;
			ans += (long long int) one * two;
		}		
	}
	cout << ans;
	return 0;
}