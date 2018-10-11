#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

int main() {
	int n = 0;
	long long t = 0;
	scanf("%i %li", &n, &t);
	
	std::vector<int> ts(n);
	for (int i = 0; i < n; ++i) {
		scanf("%i", &ts[i]);
	}

	int p1 = 0, p2 = 0;
	int curTotalTime = ts[p2];
	int maxBook = 0;

	while (p1 < n) {
		if (curTotalTime <= t) {
			if (p2 - p1 + 1 > maxBook)
				maxBook = p2 - p1 + 1;
			
			if (p2 < n - 1) {
				++p2;
				curTotalTime += ts[p2];
			}
			else {
				curTotalTime -= ts[p1];
				++p1;
			}
		}
		else {
			curTotalTime -= ts[p1];
			++p1;
		}
	}
	
	printf("%i", maxBook);

	return 0;
}