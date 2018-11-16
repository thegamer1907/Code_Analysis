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

	for(long long i{0};;) {
		if (i == t-1) {
			cout << "YES\n";
			isYes = true;
			break;
		} else if(i > (t-1)) {
			break;
			}
		else {
			i+=v[i];
		}
	}

	if(!isYes) {
		cout << "NO\n";
	} 
	return 0;
}