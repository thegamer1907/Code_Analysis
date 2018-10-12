#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
#define pb push_back 
#define mp make_pair 

int main() {
	int n, m, tmp=-1, mn, mx;
	cin >> n >> m;
	vector <int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
		tmp = max(tmp, v[i]);
	}//for i
	
	mx = m + tmp;
	mn = tmp;
	for (int i = 0; i < n; i++){
		if (v[i] != tmp)
			m -= (tmp-v[i]);
		if (m < 0)
			break;

	}//for 

	if (m > 0){
		mn += ceil(m / (double)n);
	}//if

	cout << mn << " " << mx << endl;
	return 0;
}// main