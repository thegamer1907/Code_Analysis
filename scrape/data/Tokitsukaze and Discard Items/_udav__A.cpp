#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;



int main() 
{ 

	long long n, m, k;

	cin >> n >> m >> k;

	long long deleted = 0;
	long long b, cnt = 0;
	long long in, steps = 0;

	cin >> in;

	b = (in - 1 - deleted) / k;

	cnt = 1;

	for (int i = 1; i < m; i++)
	{
		cin >> in;

		if ((in - 1 - deleted) / k == b)
			cnt++;
		else
		{
			deleted += cnt;
			cnt = 1;
			b = (in - 1 - deleted) / k;
			steps++;
		}
	}

	cout << steps + 1;
    return 0; 
}