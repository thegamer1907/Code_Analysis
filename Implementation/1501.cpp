#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <cmath>
#include <numeric>	
#include <functional> //greater - comparison struct
#include <bitset>


using namespace std;
typedef long long ll;


int main() {
	string n, b;
	
	cin >> n;
	ll row = 0;
	for (int i = 0; i < n.length()-1; i++) {
		if (n[i + 1] != n[i])
			row = 0;
		else row++;

		if (row >= 6) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}