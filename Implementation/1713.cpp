#include <bits/stdc++.h>

using namespace std;

int main(){

	string position;
	cin >> position;
	int counter = 1;

	for (int i = 1; i < position.size(); i++){
		if (position[i] == position[i-1])
			counter++;
		else
			counter = 1;
		if (counter == 7){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
