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
map<double, int> arr;
int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double v1 = (s / 5 == 0 && s!=0)?12: s/5;
	double v2 = (m / 5 == 0 && m!=0)? 12 : m / 5;
	if (s % 5 != 0)
		v1 += 0.5;
	if (m % 5 != 0)
		v2 += 0.5;
	if (s != 0 && (int)v2 == v2) {
		v2 += 0.5;
	}
	if (v1 == 12.5)
		v1 = 0.5;
	if (v2 == 12.5)
		v2 = 0.5;
	double v0 = h;
	if (m != 0 || s != 0) {
		v0 += 0.5;
		if (v0 == 12.5) 
			v0 = 0.5;
	}
	if (v0 == 0)
		v0 = 12;
	if (v1 == 0)
		v1 = 12;
	if (v2 == 0)
		v2 = 12;
	for (double i = 0.5; i <= 12; i+=0.5) {
		if (i == v0 || i ==v1 || i == v2)
			arr[i] = -1;
		else if (i == t2)
			arr[i] = 1;
	}
	for (double i = t1-0.5; ; i-=0.5) {
		if (i == 0)
			i = 12;
		if (arr[i] == -1)
			break;
		if (arr[i] == 1) {
			cout << "yes\n";
			return 0;
		}
	}
	for (double i = t1 + 0.5; ; i+=0.5) {
		if (i == 12.5)
			i = 0.5;
		if (arr[i] == -1)
			break;
		if (arr[i] == 1) {
			cout << "yes\n";
			return 0;
		}
	}
	cout << "no\n";
	return 0;
}