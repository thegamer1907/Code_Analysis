#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int participants[55];
	int n, k, max;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> participants[i];
		if (i + 1 == k)
			max = participants[i];
	}
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (participants[i] >= max && participants[i] > 0)
			count++;
	}
	cout << count << endl;
	return 0;
}