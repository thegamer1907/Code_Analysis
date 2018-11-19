#include <bits/stdc++.h>
using namespace std;

set<int> num;

int main() {
	int n, k, flag = 0, t;
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++) { 
		int s = 0;
		for(int j = 0; j < k; j++) {
			scanf("%d", &t);
			s += (t << j);
		}
		num.insert(s);
	} 
	if(num.find(0) != num.end()) {
		flag = 1;
	}
	else {
		for(set<int>::iterator it = num.begin(); it != num.end(); it++) {
			for(set<int>::iterator it2 = num.begin(); it2 != num.end(); it2++) {
				flag |= ((*it + *it2) == (*it ^ *it2));
			}
		}
	}
	puts(flag ? "yes" : "no");
	return 0;
}