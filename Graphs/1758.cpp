#include <bits/stdc++.h>

using namespace std;

int a[40000];
int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n - 1; i++){
		cin >> a[i];
	}
	if(n != k){
		for(int i = 1; i <= n - 1; i += a[i]){
			if(i == k){
				cout << "YES";
				return 0;
			}
		}
	}
	for(int i = 1; i <= n - 1; i+= a[i]){
		if((i == k - 1 && a[i] == 1) || (i == k - 2 && a[i] == 2)){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}