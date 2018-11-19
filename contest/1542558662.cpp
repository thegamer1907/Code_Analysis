#include <stdio.h>
#include <stack>
#include <map>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <climits>
using namespace std;
#define ll long long
#define mp make_pair
//#define ld long double
const int mod = 1000000007;

int main() {
	char arr[5];
	scanf("%s", arr);
	string so(arr);
	int n;
	bool val = false;
	scanf("%d", &n);
	char a[105][5];
	for (int i = 0; i < n; i++) {
		scanf("%s", a[i]);
		string s(a[i]);
		if (s == so) {
			printf("yes\n");
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if ((a[i][1] == so[0] && a[j][0] == so[1])|| (a[i][0] == so[1] && a[j][1] == so[0])) {
				printf("yes\n");
				return 0;
			}
		}
	}
	printf("no\n");
	return 0;
}