#include <iostream>
#include <string>

using namespace std;
int main() {
	int n, k;
	int uch[50];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> uch[i];
	int answ = 0;
	for (int i = 0; i < n; i++)
		if (uch[i] && uch[i] >= uch[k-1])
			answ += 1;
	cout << answ;
}