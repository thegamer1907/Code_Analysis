#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(16,0);
	for (int i=0;i<n;i++) {
		int a=0;
		for (int j=0;j<k;j++)  {
			int b;
			cin >> b;
			a*=2;
			a+=b;
		}
		v[a]++;
	}
	bool ok=false;
	for (int i=0;i<16;i++) {
		for (int j=0;j<16;j++) {
			if ((i&j)==0 and v[i]>0 and v[j]>0) ok=true;
		}
	}
	if (ok) cout << "yes" << endl;
	else cout << "no" << endl;
}
