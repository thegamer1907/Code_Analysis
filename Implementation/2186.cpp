#include <iostream>
using namespace std;

int main() {
	int n, xx = 0, yy = 0, zz = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x, y, z;
		cin >> x >> y >> z;
		xx += x;
		yy += y;
		zz += z;
	}
	if(xx == 0 && yy == 0 && zz == 0) cout << "YES";
	else cout << "NO";
	return 0;
}