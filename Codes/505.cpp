#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#include <cmath>
#include <string>
#define mp make_pair
#define pb push_back

using namespace std;

int main() 
{
	int n;
	scanf("%d", &n);
	int cnt = 1;
	long long i;
	for (i = 0; cnt <= n; ++i) {
		int q = i, sum = 0;
		while (q != 0) {
			sum += q%10;
			q/=10;
		}
		if (sum == 10) {
			cnt++;
		}
	}
	printf("%lld\n", i - 1);
	return 0;
}