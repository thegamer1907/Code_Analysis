#include <iostream>
#include <string>
using namespace std;
int main() {
	string f,g;
	cin >> f;
	int r,m=0,n = 0,b = 0;
	cin >> r;
	for (int e = 0; e < r; e++) {
		cin >> g;

		if ((g == f )|| (g.at(1) == f.at(0) && g.at(0) == f.at(1))) {
			m++;
		}
		else {
			if (g.at(0) == f.at(1)) {
				n++;
			}
			else {
				if (g.at(1) == f.at(0)) {
					b++;
				}
			}

		}

	}
	if ((!(m == 0)) || ((!(n == 0))) && ((!(b == 0)))) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}




	return 0;
}