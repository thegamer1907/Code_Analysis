#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	int k, t;
	cin >> k >> t;

	string x;
	cin >> x;

	string s = x;
	
	while (t--){ 

		for (int i = 0; i <= s.length(); i++) {

			if ((s[i] == 'B') && (s[i + 1] == 'G')) {
				s.replace(i, 1, "G");
				s.replace(i + 1, 1, "B");
				i++;
			}
		}
	
	}
		

 
cout << s << endl ;

	
	return 0;
}