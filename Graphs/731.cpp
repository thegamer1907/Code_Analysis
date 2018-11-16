#include <iostream>
using namespace std;


int main() {

	int N;
	int T;

	char String[51];

	cin >> N >> T;

	cin >> String;

	for (int j = 0; j < T; j++)

		for (int i = 0; i < N - 1;)

			if (String[i] == 'B' && String[i + 1] == 'G') {
				String[i] = 'G';
				String[i + 1] = 'B';
				i += 2;
			}
			else
				i++;
								
	cout << String << endl;
	//system("pause");
	return 0;
		   }