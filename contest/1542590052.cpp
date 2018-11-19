#include <stdio.h>  
#include <algorithm>  
#include <assert.h>
#include <bitset>
#include <cmath>  
#include <complex>  
#include <deque>  
#include <functional>  
#include <iostream>  
#include <limits.h>  
#include <map>  
#include <math.h>  
#include <queue>  
#include <set>  
#include <stdlib.h>  
#include <string.h>  
#include <string>  
#include <time.h>  
#include <unordered_map>  
#include <unordered_set>  
#include <vector>

#pragma warning(disable:4996)  
#pragma comment(linker, "/STACK:336777216")  
using namespace std;

#define mp make_pair  
#define Fi first  
#define Se second  
#define pb(x) push_back(x)  
#define szz(x) ((int)(x).size()) 
#define all(x) (x).begin(), (x).end()  
#define ldb ldouble  

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;
#define rep(i, n) for(int i=0;i<n;i++)

int IT_MAX = 1 << 17;
const ll MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x1f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;

bool chk[16];

int u[4];
int main() {
	int N, K, i, j;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		for (j = 0; j < K; j++) scanf("%d", &u[j]);
		int v = 0;
		for (j = 0; j < 4; j++) v = 2 * v + u[j];
		chk[v] = true;
	}

	for (i = 0; i < 16; i++) {
		for (j = 0; j < 16; j++) {
			if (!chk[i] || !chk[j]) continue;
			if (i & j) continue;
			return !printf("YES\n");
		}
	}
	return !printf("NO\n");
}