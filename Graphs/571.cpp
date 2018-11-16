#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, t;
	cin >>n >>t;
	string q;
	char temp;
	cin >>q;

	for(int i = 0; i<t; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(q[j] == 'B' && q[j+1] == 'G') {
				//swap them
				temp = q[j+1];
				q[j+1] = q[j];
				q[j] = temp;
				j++; //as after swapping, the current char is one position ahead
			}
		}
	}

	cout <<q;
	return 0;
}