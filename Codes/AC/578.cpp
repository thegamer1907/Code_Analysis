#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <iomanip>
using namespace std;
int n,m;
long long minf = 1e18 , maxf;
long double ans=9999999999999;
multiset <long long> kek, lol;
vector <long long > maxon;
int main() {
	cin >> n;
	int kol = 0;
	for (int i = 0; i < 999999999; i++) {
		int sum = 0,val=i;
		while (val != 0) {
			sum += val % 10;
			val /= 10;
		}
		if (sum == 10)
			kol++;
		if (kol == n) {
			cout << i;
			break;
		}
	}
	return 0;
}