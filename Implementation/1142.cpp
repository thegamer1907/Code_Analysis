#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	char a[51];
	cin >> a;
	while (t > 0) {
		for (int i = 0; i < n;) {
			if (a[i] == 'B' && a[i+1] == 'G') {
				a[i] = 'G';
				a[i+1] = 'B';
				i += 2;
			}
			else {
				i++;
			}
		}
		t--;
	}
	cout << a << endl;
	return 0;
}