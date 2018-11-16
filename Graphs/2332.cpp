#include <cstdio>

int depth(int p[], int d[], int index){
	if (!d[index]){
		if (p[index] == -1)
			d[index] = 1;
		else 
			d[index] = depth(p, d, p[index]) + 1;
	}
	return d[index];
}

int main (){
	int n, x, ans = 0;
	int p[2001], d[2001] = {};
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &p[i]);
	for (int i = 1; i <= n; i++){
		x = depth(p, d, i);
		if (ans < x)
			ans = x;
	}
	printf("%d\n", ans);
	return 0;
}