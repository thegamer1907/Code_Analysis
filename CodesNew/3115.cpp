#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0;i < n;i++)
		cin >> arr[i];
	int i = 0,j = 0, kk = 0;
	int ans = 0, l = 0, r = 0;
	while(i < n){
		if(arr[i] == 0)
			kk++;
		if(kk > k){
			// cout << i << " " << j << endl;
			if(i-j > ans){
				ans = i-j;
				l = j;r = i;
			}
			while(arr[j] != 0)
				j++;
			j++;
			kk--;
		}
		i++;
	}
	if(i-j > ans){
		ans = i-j;
		l = j;r = i;
	}
	cout << ans << endl;
	for(int i = 0;i < n;i++){
		if(i >= l && i < r)
			cout << 1 << " ";
		else
			cout << arr[i] << " ";
	}
	cout << endl;
}