#include <bits/stdc++.h>
#define N 101
typedef long long ll;
using namespace std;
int n;
int mx, cnt, start;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	mx = INT_MIN;
	cin >> n;
	int arr[n];
	int freq[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 1){
			freq[i] = -1;
			start++;
		}
		else
			freq[i] = 1;
	}
	cnt = freq[0];
	mx = freq[0];
	for(int i = 1; i < n; i++){
		cnt = max(cnt + freq[i], freq[i]);
		mx = max(mx, cnt);
	}
	// for(auto x : freq)
	// 	cout << x << "\t";
	cout << start + mx << "\n";
	return 0;
}