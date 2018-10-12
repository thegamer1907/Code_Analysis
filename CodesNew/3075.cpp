#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

#define int long long 

const int N = 1e6 + 20;

int n, sum[N], k;
string s;

int ch(int x, int y){
	if (x != 0)return sum[y] - sum[x - 1];
	return sum[y];
}

main (){
	cin >> k >> s;
	int n = s.size();
	for (int i = 0; i < s.size(); i++){
		if (!i) sum[i] = (s[i] == '1');
		else sum[i] = sum[i - 1] + (s[i] == '1');
		//cout << sum[i];
	}
	//cout << endl;
	int col  = 0;
	for (int i = 0; i < s.size(); i++){
		int l = 0, r = i, ans = -1, ans1 = -1;
		while (l <= r){
			int mid = (l + r) / 2;
			if (ch(mid, i) >= k){
				l = mid + 1;
				ans = mid;
			}
			else r = mid - 1;
		}
		l = 0, r = i;
		while (l <= r){
			int mid = (l + r) / 2;
			if (ch(mid, i) <= k){
				r = mid - 1;
				ans1 = mid;
			}
			else l = mid + 1;
		}
		if (ans != -1 && ans1 != -1)col += (ans - ans1 + 1);
		//cout << i << " >> " << ans  << " " << ans1 << endl;
	}
	cout << col;
	return 0;
} 