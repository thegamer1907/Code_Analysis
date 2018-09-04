#include<bits/stdc++.h>
using namespace std;

const int M = 2005;

bool sum(int n) {
	int ans =0;
	while(n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans == 10 ? 1 : 0;
}

int main() {
	int k;
	cin >> k;
	
	
	for(int i = 19; ; i++) {
		if(sum(i))
		k --;
		
		if(k == 0) {
			cout << i << endl;
			return 0;
		}
		
	}
}
