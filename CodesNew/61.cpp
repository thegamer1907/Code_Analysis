#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// Directorio: cd C:\Users\juanj\Desktop\Codigo\C++
// Compila y crea EXE: g++ -std=c++11 nombreCodigo.cpp -o NombreEXE
// Si no pongo nombre al EXE se llamara "a"

int main() {
	cout << fixed << setprecision(20);
	int n;
	int l;
	int a;

	int left;
	int right;
	float maxD = 0;

	cin >> n >> l;
	vector<int> vec(n);
	
	for (int i = 0; i < n; i++){
		cin >> a;
		vec[i] = a;
	}

	sort(vec.begin(), vec.end());

	left = vec[0];
	right = l - vec[n-1];

	for (int i = 1; i < n; i++){
		int dist = vec[i] - vec[i-1];
		if (float(dist) > maxD){
			maxD = dist;
		}
	}

	maxD = maxD/2;

	if (float(left) > maxD){
		maxD = left;
	}
	if (float(right) > maxD){
		maxD = right;
	}
	
	
	cout << maxD;

		

	
  
    return 0;
}