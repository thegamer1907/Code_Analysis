#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

int a[100];
int mi[5];
int n, k, tmp;

int main() {
	memset(a, 0, sizeof(a));
	mi[0] = 1;
	for (int i = 1; i < 5; i ++)
		mi[i] = mi[i - 1] * 2;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i ++) {
		int sum = 0;
		for (int j = 0; j < k; j ++) {
			scanf("%d", &tmp);
			sum += tmp * mi[j];
		}
		a[sum] = 1;
	}
	for (int i = 0; i < mi[4]; i ++) {
		for (int j = 0; j < mi[4]; j ++) {
			if (a[i] == 1 && a[j] == 1 && (i & j) == 0) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
