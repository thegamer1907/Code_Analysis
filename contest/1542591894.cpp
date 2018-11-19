#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[]) {

	bool first = false, second = false;
	int loop1, num;
	string letters, words[100];
	

	cin >> letters;
	cin >> num;

	for (loop1 = 0; loop1 < num; loop1++) {

		cin >> words[loop1];
		if (words[loop1] == letters) {
			first = second = true;
		}
		if (words[loop1][1] == letters[0]) {
			first = true;
		}
		if (words[loop1][0] == letters[1]) {
			second = true;
		}
	}

	if (first && second) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}