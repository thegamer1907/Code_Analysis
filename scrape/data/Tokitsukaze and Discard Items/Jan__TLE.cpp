#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<vector>
const int inf = 0x3f3f3f3f;
using namespace std;

long long n, m, k, a[100010], sum = 0;

int main() {
	scanf("%lld %lld %lld",&n,&m,&k);
	for (int i = 1; i <= m; i++)
		scanf("%lld",&a[i]);
	int c, num;
	for (int i = 1; i <= m; ) {
		c = (a[i] - i) / k, num = i;
		while ((a[i] - num) / k == c)
			i++;
		sum++;
	}
	printf("%lld\n",sum);





	return 0;
}