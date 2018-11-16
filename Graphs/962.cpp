#include <bits/stdc++.h>
using namespace std;

int a[40000],n,k;

int main(){
	cin >> n >> k;
	for(int i = 1; i < n; i++){
		cin >> a[i];
	}
	if(k != n){
		for(int i = 1; i < n; i += a[i]){
			if(i == k){
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
		return 0;	
	}
	
	for(int i = 1; i < n; i += a[i]){
		if(i + a[i] == k){
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	return 0;
}
/*
4 4
2 1 1
*/