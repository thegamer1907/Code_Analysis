#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
const int maxn = 1024;
int qtd[maxn], guys[50];
int main(){
	int n, k;
	cin >> n >> k;
	for(int e = 0; e < n; e++){
		int ma = 0;
		for(int f = 0; f < k; f++){
			int x; scanf("%d", &x);
			if(x) ma |= (1<<f);
		}
		qtd[ma]++;
	}
	for(int e = 0; e < (1<<k); e++)
		for(int f = 0; f < (1<<k); f++){
			if(qtd[e] && qtd[f] && ((e&f) == 0)){
				cout << "YES" << endl;
				return 0;
			}
		}
	cout << "NO" << endl;
	return 0;
}
