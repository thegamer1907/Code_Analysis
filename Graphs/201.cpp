#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s;
	int n, t;
	cin >> n >> t;
	cin.get();
	cin >> s;
	
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			if (s[j] < s[j + 1]) {
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}
	
	cout << s;
	return 0;
}