#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	
	
	ignore = scanf("%d", &n);
	
	//cout << "n = " << n << endl;
	
	int ans = 1e9 + 1e5 + 10;
	int ans_id;
	
	for (int i = 0; i < n; i++) {
		int tmp;
		ignore = scanf("%d", &tmp);
		//we are (tmp % n) ---> i
		
		int res = (i) - (tmp % n);
		if (res < 0) res += n;
		
		//cout << i << " " << tmp << " we are in " << tmp % n << " + " << res << " -> " << i << endl;
		
		tmp += res;
		tmp += 1;
		
		if (tmp < ans) {
			ans = tmp;
			ans_id = i + 1;
		}
		
	}
	
	
	printf("%d\n", ans_id);

	return 0;
}
