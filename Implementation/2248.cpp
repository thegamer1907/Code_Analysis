#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int k, n, w, b;
	
	cin >> k >> n >> w;
	b = (n - k * w * (1 + w) / 2);
	if(b < 0)
	cout << abs(b);
	else
	cout << 0;
	return 0;
}
