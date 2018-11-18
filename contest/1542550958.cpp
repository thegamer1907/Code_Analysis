#include <iostream>
#include <string.h>
#include <cstdio>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int vi[30];

int main(){
	int n, m, x;
	cin >> n >> m;
	for (int i = 0; i < n; i ++){
		int sum = 0;
		for (int j = 0; j < m; j ++){
			cin >> x;
			sum = sum * 2 + x;
		}
		vi[sum] ++;
	}
	for (int i = 0; i < 16; i ++){
		for (int j = i; j < 16; j ++){
			if (((i & j) == 0) && vi[i] && vi[j]){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
} 