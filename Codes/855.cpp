#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long k;

int main()
{
	cin >> n >> k;
	int index = 1;
	while(k)
	{
		if(k & 1)
		{
			cout << index << "\n";
			return 0;
		}
		index++;
		k >>= 1;
	}

	return 0;
}