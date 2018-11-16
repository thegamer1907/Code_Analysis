#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdint>
#include <deque>
#include <functional>
#include <fstream>
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

#pragma comment(linker, "/STACK:336777216")

using namespace std;

const double pi = (double) 3.141592653589793238462643383279502884197169399375105;
long long MOD = (long long)1e9 + 7;

long long power(long long n, long long k) {
	if (k == 0) return 1;
	else if (k == 1) return n;
	else {
		if (k % 2 == 0) return power((n * n) % MOD, k / 2);
		else return (power((n * n) % MOD, k / 2) * n) % MOD;
	}
}

long long modInv(long long n) { return power(n, MOD - 2); }
long long gcd(long long a, long long b) { if (b == 0) return a; else return gcd(b, a % b); }
template <class T>
bool reverse_sort(T a, T b) { return a > b; }

/*
ifstream infile("C-small-attempt1.in");
ofstream outfile("answer.txt");

void submit(long long t, double N) {
	cout.precision(20);
	outfile.precision(20);
	cout << "Case #" << t << ": " << N << endl;
	outfile << "Case #" << t << ": " << N << endl;
}
*/
// fill_n(dp[0][0][0], 100 * 100 * 30 * 20, -2);
// bool operator < (const name &right) const return left < right;
// cout.precision(20);
// outfile.precision(20);

//20;

long long connect[(long long)1e4 + 3] = { 0 };
long long arr[(long long)1e4 + 3] = { 0 };
long long now[(long long)1e4 + 3] = { 0 };


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	for (int i = 2; i <= n; i++) cin >> connect[i];
	for (int i = 1; i <= n; i++) cin >> arr[i];
	long long cnt = 0;
	for (int i = 1; i <= n; i++) {
		long long target = arr[i];
		if (arr[i] != now[connect[i]]) cnt++;
		now[i] = arr[i];
	}
	cout << cnt;
	return 0;
}