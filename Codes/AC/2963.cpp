#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <fstream>

#define F first
#define S second
#define PB push_back

using namespace std;

const int maxn = 1e6 + 100, base = 37;
long long hashing[maxn], po[maxn];
string s;

void hsh(){
	for (int i = 1; i < s.size(); i++)
		hashing[i] = (s[i] - 'a' + 1) + (hashing[i - 1] * base);
}

long long f(int len, long long k){
	for (int i = len + 1; i < s.size() - 1; i++){
		long long m = hashing[i] - hashing[i - len] * po[len];
		if (m == k)
			return true;
	}
	return false;
}

int main(){
	string a;
	cin >> a;
	s = "0" + a;
	if (a.size() < 3)
		return cout << "Just a legend" << endl, 0;
	hsh();
	po[0] = 1;
	for (int i = 1; i < maxn; i++)
		po[i] = (po[i - 1] * base);
	int l = 0, r = s.size() - 3;
	int n = s.size() - 1;
	while (r > 0){
		int mid = r;
		long long k = hashing[mid];
		long long m = hashing[n] - hashing[n - mid] * po[mid];
//		cout << mid << " -> " << hashing[n] << " " << hashing[n - mid - 1] << " " << po[mid] << " - " << k << endl;
//		cout << mid << " " << m << " " << k << endl;
		if (k == m){
//			cout << r << " <----- " << endl;
			if (f(mid, k))
				break;
		}
		r --;
	}
	if (r == 0){
		return cout << "Just a legend" << endl, 0;
	}
	cout << s.substr(1, r) << endl;
}
