#include <bits/stdc++.h>
using namespace std;
int tot, n, jl[10005];
int main(void){
	for(int i = 19; i <= 11000000; i+=9){
		int tmp = i, cnt = 0;
		while(tmp){
			cnt += (tmp%10);
			tmp /= 10;
		}
		if (cnt == 10)  jl[++tot] = i;
	}
	cin >> n;
	cout << jl[n];
	return 0;
}