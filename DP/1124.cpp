#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, res = 0, unos = 0, A[110];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		if(A[i]) unos++;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int z = 0, o = 0;
			for(int k = i; k<=j; k++){
				if(A[k]) o++;
				else z++;
			}
			res = max(res, unos+z-o);
		}
	}
	cout << res;
	
	return 0;
}
