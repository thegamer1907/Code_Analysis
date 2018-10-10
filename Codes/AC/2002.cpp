//Kaori Miyazono, did I reach you ?
//"I can't die because... I have to protect you." -Asuna Yuuki

#include <bits/stdc++.h>
using namespace std;

const int N = 200200;

unordered_map<long long int, int> a, b;
int n, k;
long long int nums[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> nums[i];
	}	
	for(int i = 0; i < n; i++){
		b[nums[i]]++;
	}
	long long int ans = 0;
	for(int i = 0; i < n - 1; i++){
		b[nums[i]]--;
		if (nums[i] % k == 0){
			ans += 1LL * a[nums[i] / k] * b[nums[i] * k];		
		}
		a[nums[i]]++;
	}
	cout << ans;
	return 0;
}