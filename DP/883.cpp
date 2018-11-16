#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int cont = 0, maxcont = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			cont = 0;
			for(int k = 0; k < n; k++){
				if(k >= i && k <= j){
					cont += 1 - a[k];
				} else{
					cont += a[k];
				}
			}
			maxcont = max(cont, maxcont);
		}
	}
	cout << maxcont << endl;
	return 0;
}

