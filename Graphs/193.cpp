#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, t, i = 0;
	bool check = false;
	string line;
	cin >> n >> t;
	cin >> line;
	while (t != 0) {
		for (i; i < (n - 1);) {
			if ((line[i] == 'B') && (line[i + 1] == 'G')) {
				line[i] = 'G';
				line[i + 1] = 'B';
				i += 2;
				check = true;
			}
			else
				++i;
		}
		if (check == true) {
			--t;
			i = 0;
		}
		else
			break;
	}
	cout << line << endl;
	return 0;
}