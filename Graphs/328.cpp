#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t--)
		for(int i = 0; i < n; i++)
			if(s[i] == 'B' && s[i+1] == 'G'){
				s[i+1] = 'B';
				s[i] = 'G';
				i++;
			}
	cout << s;
	return 0;
}