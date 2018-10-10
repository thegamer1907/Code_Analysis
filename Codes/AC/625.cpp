#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
int n;
int main() {
	scanf("%d", &n);
	for(int i = 1; i <= 1000000000; i++) {
		int x = i;
		int res = 0;
		while(x)res += x % 10, x /= 10;
		if(res == 10)n--;
		if(n == 0) {
			n = i;
			break;
		}
	}
	printf("%d\n", n);
	return 0;
}