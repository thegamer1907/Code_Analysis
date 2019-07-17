#include<iostream>
#include<cstdio>
using namespace std;

long long n,  a[100010], c;
long long m, k, sum = 0, num;

int main() {
	scanf("%I64d %I64d %I64d",&n,&m,&k);
	for (int i = 1; i <= m; i++)
		scanf("%I64d",&a[i]);
	for (int i = 1; i <= m; ) {
		c = (a[i] - i) / k, num = i++;
		sum++;
		while (i <= m && (a[i] - num) / k == c)
			i++;
	}
	printf("%I64d\n",sum);



	return 0;
}