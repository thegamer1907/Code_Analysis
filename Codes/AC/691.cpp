#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
#define ll long long
using namespace std;
int ar[10000] = {};
int main() {
	speed;
	int k = 0, i = 19, q;
	while (k < 10000) {
		int s = 0, j = i;
		while (j) {
			s += j % 10;
			j /= 10;
		}
		if (s == 10)ar[k] = i, ++k;
		++i;
	}
	cin >> q;
	cout << ar[q-1];
}