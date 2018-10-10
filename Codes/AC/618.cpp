#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int k;
	cin >> k;
	int cnt = 0;
	int i = 1; 
	while (true) {
		int tmp = i, x = 0;
		while (tmp > 0) {
			x += tmp%10;
			tmp /= 10;
		}
		if (x == 10) {
			cnt++;
		}
		if (cnt == k) {
			cout << i << endl;
			return 0;
		}
		i++;
	}
	return 0;
}
