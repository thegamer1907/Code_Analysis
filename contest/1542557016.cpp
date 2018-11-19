#include<bits/stdc++.h>
using namespace std;

int main(void){
	int f[101];
	memset(f, 0, sizeof(f));
	int n, k, flag;
	int i , j, x;
	cin >> n >> k;
	for(i = 1; i <= n; i++){
		int cnt = 0;
		for(j = 1; j <= k; j++){
			cin >> x;
			cnt += (1 << j - 1) * x;
		}
		f[cnt] = 1;
	}
	flag = 0;
	for(i = 0; i < 16; i++){
		for(j = 0; j < 16; j++){
			if(!(i & j) && f[i] && f[j]){
				flag = 1;
			}
		}
	}
	if(flag){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
