#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cctype>
using namespace std;

int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int res = ceil(1. * w * k * (w + 1) / 2) - n;
	cout << ((res < 0) ? 0 : res) << endl;
}