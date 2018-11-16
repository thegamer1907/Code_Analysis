#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t--){
		int  i = 0;
		while(s[i+1]){
			if(s[i] == 'B' && s[i + 1] == 'G'){
				s[i] = 'G';
				s[i+1] = 'B';
				i += 2;
			}
			else{
				i++;
			}
		}
	}
	cout << s << endl;
	return 0;
}