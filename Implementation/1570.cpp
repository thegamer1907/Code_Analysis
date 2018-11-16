#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, len;
	int counter0 = 0;
	int counter1 = 0;
	string data;
	cin >> data;

	len = data.length();

	for(int i = 0; i < len; i++) {
		if(data[i] == '0') {
			counter0++;
		} else {
			counter0 = 0;
		}

		if(data[i] == '1') {
			counter1++;
		} else {
			counter1 = 0;
		}

		if( (counter0 == 7) || (counter1 == 7) ) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}