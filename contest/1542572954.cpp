#include<bits/stdc++.h>
using namespace std;
int v[50];
int main(){
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		int sum = 0, aux;
		for(int i = 0; i < k; i++){
			cin >> aux;
			sum = sum*2 + aux;
		}
		v[sum]++;
		
	}
	int cont[5];
	for(int i = 0; i < 1 << (1 << k); i++){
		memset(cont, 0, sizeof(cont) );
		int tot = 0;
		for(int j = 0; j < 1 << k; j++){
			if(i & (1 << j) && v[j]){
				tot++;
				for(int l = 0; l < k; l++)
					if(j & (1 << l)) cont[l]++;
			}
		}
		int flag = tot > 0;
		for(int i = 0; i < k; i++){
			if(cont[i] > tot/2) flag = 0;
		}
		if(flag){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
}