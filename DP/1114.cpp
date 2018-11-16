#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

const int c[2] = {1,-1};

int main() {
	int n,s=0,tmp;
	vector<int> a;
	cin >> n;
	for (int i=0; i < n ; i++) {
		cin >> tmp;
		s+= tmp;
		a.push_back(c[tmp]);
	}
	int maxAdd = -1000,L=0;
	for (int i=0; i < n; i++) {
		maxAdd  = max(maxAdd,a[i]);
		L = a[i];
		for (int j= i+1; j < n; j++) {
			L+=a[j];
			maxAdd=max(maxAdd,L);
		}
	}
	cout << s+maxAdd;
}