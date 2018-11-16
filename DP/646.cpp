#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5 + 7;

int sum[MAXN];

int main(){
	string str;
	cin >> str;
	int n = str.size();
	str = '?' + str + '?';
	sum[0] = 0;
	for(int i = 1;i <= n;i++){
		sum[i] = (str[i] == str[i+1]);
		sum[i] += sum[i-1];
	}
	int m;
	cin >> m;
	for(int i = 0;i < m;i++){
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l-1] - (str[r] == str[r+1]) << '\n';
	}
	return 0;
}