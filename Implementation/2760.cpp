#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;



int main() {
	int n,k=0,t,f=-1;
	cin >> n;
	for (int i = 0;i < n;++i) {
		cin >> t;
		k+=t;
		f=max(f,t);
	}
	cout << f*n-k;
	return 0;
}
