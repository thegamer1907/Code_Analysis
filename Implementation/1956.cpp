#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int xNet = 0, yNet = 0, zNet = 0;
	for (int i = 0; i < n; i++)
	{
		int x,y,z;
		cin >> x >> y >> z;
		xNet += x;
		yNet += y;
		zNet += z;
	}
	if (xNet == 0 && yNet == 0 && zNet == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}