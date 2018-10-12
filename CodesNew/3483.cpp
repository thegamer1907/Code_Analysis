#include "bits/stdc++.h"

using namespace std;
int main() {
	int n, m, k_min, k_max, temp;
	int max = 1;
	cin >> n >> m;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	k_max = max + m;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	int check = 0;
	int t = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1])
			check++;
	}
	while (t < n && m > 0 && n != 1 && check != n - 1){
			while (arr[t] == arr[t + 1])
				t++;
			for (int i = 0; i <= t; i++) {
			    if (m > 0) {
				    arr[i]++;
				    m--;
			    }
		    }	
	}
	while (m > 0) {
		for (int i = 0; i < n; i++) {
			if (m > 0) {
				arr[i]++;
				m--;
			}
		}
	}
	k_min = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > k_min)
			k_min = arr[i];
	cout << k_min << " " << k_max << " ";
}