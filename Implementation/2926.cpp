#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
	int64_t o,v,i,s;
	cin >> o >> v >> i >> s;
	int64_t sum = min(min(o,i),s)<<8;
	o-= min(min(o, i), s);
	sum+=min(o,v)<<5;
	cout << sum;
	return 0;
}