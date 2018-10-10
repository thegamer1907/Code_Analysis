#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

using namespace std;
const int N = (1<<18) , M = (1<<14), OO = 0x3f3f3f3f;

int sum(int x){
	int ret = 0;
	while(x){
		ret += x%10;
		x /= 10;
	}
	return ret;
}

int main(){
  // freopen("i.in", "rt", stdin);
  // freopen("o.out", "wt", stdout);
	cin.sync_with_stdio(0);
	int cnt = 0;
	int k;
	cin >> k;
	for(int i = 10 ; i < 11000000 ; ++i){
		if(sum(i) == 10)	++cnt;
		if(cnt == k)	return printf("%d\n", i), 0;
	}
	cout << cnt << endl;
	return 0;
}








