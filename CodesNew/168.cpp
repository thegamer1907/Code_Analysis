#include <bits/stdc++.h>

using namespace std;


int main()
{
	long long int n, k, count = 2;
	cin >> n >> k;
	if (k % 2 == 1){ cout << 1 << endl; return 0; }
	for (int j = 0; j <49;j++){
		k /= 2;
		if (k % 2 == 1)break;
		count++;
	}
	cout << count << endl;
	return 0;
}
