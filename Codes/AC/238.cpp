#include <bits/stdc++.h>
using namespace std;

int n, inicio[100010], fim[100010], prox = 1;

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int tam;
		scanf("%d", &tam);
		inicio[i] = prox;
		fim[i] = prox+tam-1;
		prox += tam;
	}
	int q;
	scanf("%d", &q);
	for(int i = 0; i < q; i++){
		int v;
		scanf("%d", &v);
		int l = 1, r = n, ans = -1;
		while(l <= r){
			int mid = (l+r)/2;
			if(inicio[mid] <= v && v <= fim[mid]){
				ans = mid;
				break;
			}
			if(inicio[mid] > v)
				r = mid-1;
			else
				l = mid+1;
		}
		printf("%d\n", ans);
	}
}

