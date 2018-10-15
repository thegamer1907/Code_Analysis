#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int n;
long long a[500001];
int sum;
int k;

int main (){
	scanf("%d", &n);
	sum = n;
	for (int i = 1; i <= n; i ++){
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	k = (n + 1) / 2;
	for (int i = n; i > (n + 1) / 2; i --){
		while (a[i] < a[k] * 2){
			k --;
			if (k == 0){
				printf("%d", sum);
				return 0;
			}
		}
		sum --;
		k --;
		if (k == 0){
			printf("%d", sum);
			return 0;
		}
	}
	printf ("%d", sum);
	return 0;
}