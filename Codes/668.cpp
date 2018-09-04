#include <bits/stdc++.h>
using namespace std;

vector<int> num;

void pre() {
	for (int i = 1; i < 11000000; i++) {
		int tmp = i;
		int total = 0;
		while (tmp> 0) {
			total += tmp%10;
			tmp /= 10;	
		}
		if (total == 10) num.push_back(i);
	}
}

int main() {
	pre();
	int k; scanf("%d", &k);
	printf("%d\n", num[k-1]);
	return 0;	
}
