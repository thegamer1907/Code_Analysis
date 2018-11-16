#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	char str[n + 1];
	cin >> str;
	// cout << "Bfr: " << str << endl;

	while (t) {

		for (int i = 0; i < n; ++i)
		{
			if (str[i] == 'B' && str[i + 1] == 'G')
			{
				//swap
				str[i] = 'G';
				str[i + 1] = 'B';
				i++;
			}
		}

		t--;
	}


	cout << str << endl;
}