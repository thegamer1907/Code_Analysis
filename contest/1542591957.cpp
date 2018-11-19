#include <iostream>

using namespace std;

int main() {
	string P;
	cin >> P;
	int N;
	cin >> N;
	bool first, second;
	first = second = false;
	for(int i = 0; i < N; i++) {
		string word;
		cin >> word;
		if(word == P) {
			cout << "YES" << endl;		
			return 0;
		}
		if(word[0] == P[1]) second = true;
		if(word[1] == P[0]) first = true;
	}
	cout << ( (first and second) ? "YES" : "NO") << endl;
}
