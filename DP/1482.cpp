#include <iostream>

int coins[100];
int COUNT = 0;
int TOTAL = 0;
int MAX = 0;
using namespace std;

int convert(int a, int b) {
	int pos = b-a + 1;
	int TOTAL = coins[b] - coins[a] + 1;
	return pos - TOTAL + pos;
}

int main() {
	int n;
	int tmp;
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> tmp;
		if (tmp == 0) {
			coins[COUNT] = i;
			COUNT++;
		} else {
			TOTAL++;
		}
		//cin >> coins[i];
	}
//	for (int a = start; a < n; start++) {

	//}
	for (int i=0; i < COUNT; i++) {
		for (int j = i ; j < COUNT; j++){
			int q = convert(i,j);
			if (q > MAX){
				MAX = q;
			}
		}
	}
	if (COUNT == 0) {
		cout << TOTAL -1 ;
	}else{
	cout << TOTAL + MAX;}
}