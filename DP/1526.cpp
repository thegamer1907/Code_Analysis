#include <stdio.h>
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <assert.h>
#include <stdlib.h>

#define i64 long long

//#define DEBUG

#ifdef DEBUG
    #define eprintf printf(">>> "); printf
#else
    #define eprintf none
#endif
void none(...) {}
using namespace std;

const int maxn = (int)1e5 + 5;
int a[maxn];

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
#endif
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int now = 0, ans = 0;
	for (int i = 0;  i < n; i++) {
		for (int j = i; j < n; j++) {
			int mx = 0;
			for (int k = 0; k < i; k++) {
				if (a[k] == 1) mx++;
			}
			for (int k = i; k <= j; k++) {
				if (a[k] == 0) mx++;
			}
			for (int k = j + 1; k < n; k++) 
				if (a[k] == 1) mx++;
			ans = max(mx, ans);
		}
	}
	cout << ans;
    return 0;
}

