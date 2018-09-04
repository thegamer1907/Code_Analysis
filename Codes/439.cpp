#include <cstdio>
int sumDigit(int n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main (){
	int k, n = 0;
	scanf("%d", &k);
	while (k){
		n++;
		if (sumDigit(n) <= 10)
			k--;
	}
	printf("%d%d\n", n, 10 - sumDigit(n));
	return 0;
}