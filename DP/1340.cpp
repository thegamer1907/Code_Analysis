#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int lol = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 0)
			a[i] = -1;
		}
	int ans = a[0], sum = 0, max_sum = 0, ans_l = 0, ans_r = 0, min_pos = -1;
	for (int r=0; r<n; ++r) {
		sum += a[r];
 
		int cur = sum - max_sum;
		if (cur < ans) {
			ans = cur;
			ans_l = min_pos + 1;
			ans_r = r;
		}
       	
		if (sum > max_sum) {
			max_sum = sum;
			min_pos = r;
		}
}	
        int sumkek = 0;
	//cout << ans_l <<" " << ans_r << " "<< ans << endl;
	//cout << lol + (ans_r - ans_l - ans);
	for(int i = 0; i < ans_l; i++)
		if(a[i] == 1)
		sumkek += a[i];
	for(int i = ans_l; i <= ans_r; i++){
		if(a[i] == -1)
			sumkek += 1;
	}	
	for(int i = ans_r + 1; i < n; i++)
		if(a[i] == 1)
		sumkek += a[i];
	cout << sumkek;	
	 
	
}
