#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;



int main() {
	int n,k;
	cin >> n >> k;
	for (int i = n;i >= 0;--i)
	{
		if (i*(i + 1) / 2 * 5 + k <= 240)
		{
			cout << i;break;
		}
	}

	return 0;
}
