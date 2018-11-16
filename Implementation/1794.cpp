#include <iostream>
#include <string>

using namespace std;

int main(){
	int n = 7, k = 7;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0') {
			n--;
			k = 7;
		}
		if(s[i] == '1') {
			n = 7;
			k--;
		}
		if(!n || !k){
			cout << "YES";
			return 0;
		}
	}
	 cout << "NO";

	return 0;
}
