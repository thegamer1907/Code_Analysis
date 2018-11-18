#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <queue>
#include <stack>
#include <sstream>
#include <cstring>
#include <numeric>
#include <ctime>
#include <cassert>

using namespace std;

string cmptemp;
string pass;
string bark[105];

int n;
bool res;

bool solve() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cmptemp = bark[i] + bark[j];
			if(cmptemp.find(pass) != cmptemp.npos) {
				return true;
			}
		}
	}
	return false;
}


int main() {
	cin >> pass >> n;
	for(int i = 0; i < n; i++) {
		cin >> bark[i];
	}

	cout << (solve()?"YES":"NO") << endl;
	return 0;
}