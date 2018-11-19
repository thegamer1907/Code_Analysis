#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <sstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <list>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
//#include<unordered_map>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
int dx8[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy8[] = { -1, 1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 1, -1, 0, 0 };
int dx[] = { 0, 0, 1, -1 };
int X[6] = { 0, 0, 0, -1, 0, 1 };
int Y[6] = { 0, 0, -1, 0, 1, 0 };
int Z[6] = { 1, -1, 0, 0, 0, 0 };

// start + (end - start) / 2;
#define MAX 30005
#define OO ll(2e18)
#define MOD ll(1000000007)
#define BASE 128LL	
#define BASEINV (ll)570312504
#define all(v) v.begin(),v.end()

using namespace std;
string s;
char x[5];
int main() {
	int n;
	scanf("%s %d", x, &n);
	s = x;
	vector<string>v(n);
	for (int i = 0; i < n; i++) {
		scanf("%s", x);
		v[i] = x;
	}
	for (int i = 0; i < n; i++) {
		string t = v[i];
		for (int j = 0; j < n; j++) {
			string f = t;
			f += v[j];
			for (int k = 0; k < 3; k++)
				if (s == f.substr(k, 2)) {
					puts("YES");
					return 0;
				}
		}
	}
	puts("NO");
}