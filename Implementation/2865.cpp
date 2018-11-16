#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Try different approaches
using namespace std;

int a, b;

int main()
{
	ios::sync_with_stdio(0);
	cin >> a >> b;

	int count = 0;
	while(a <= b)
	{
		a *= 3;
		b *= 2;
		count++;
	}

	cout << count << "\n";

	return 0;
}