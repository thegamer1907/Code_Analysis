//============================================================================
// Name        : cf991C.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

// Some macros

// functions
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORR(i, n) for (int i = n - 1; i >= 0; i--)
#define FFOR(i, lo, hi) for (int i = lo; i < hi; i++)
#define FFORR(i, lo, hi) for (int i = hi - 1; i >= lo; i--)
#define IN(i, l, r) (l <= i && i <= r)
#define MMAX(a, b) (a) = max((a), (b))
#define MMIN(a, b) (a) = min((a), (b))

// extra stuff
#define clr(arr, x) memset(arr, x, sizeof(arr))
#define get(i) scanf("%d", &i)
#define dget(i) int i; scanf("%d", &i)
#define sz(x) int((x).size())

// shortcuts
#define ll long long
#define ull unsigned long long
#define pb push_back

// variables
#define PI 3.1415926535897932384626

// debugging
#define FPRINT(a) FOR(i, a.size()) cout << a[i] << (i == a.size() - 1 ? "\n" : " ")

long long num(long long n, long long k) {
	long long sum = 0;
	while (n > 0) {
		if (n < k) {
			sum += n;
			n = 0;
		} else {
			sum += k;
			n -= k;
		}
		n -= n / 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n; scanf("%lld", &n);
	
	long long lo = 1, hi = n;
	
	while (lo <= hi) {
		long long mid = (lo + hi) / 2;
		if (num(n, mid) * 2 >= n) 	hi = mid - 1;
		else 						lo = mid + 1;
	} 
	
	cout << lo << endl;
	
	return 0;
}

