#include <iostream>
#include <vector>
using namespace std;

long long n,t, val,res;
bool isYes{false};
std::vector<int> v;

int main() {
	cin >> n >> t;
	for (long long i{0}; i<n-1; ++i) {
		cin >> val;
		v.push_back(val);
	}

	int i{0};
	while (i < (t-1)) {
		i+=v[i];
	}

	if(i ==(t-1)) {
		cout << "YES\n";
	}  else {
		cout << "NO\n";
	}

	
	return 0;
}
