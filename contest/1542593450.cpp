#include <iostream>
#include <string>
using namespace std;
string pw;
string bark;
int n;
int fc[26], sc[26];
int main(){
	cin >> pw >> n;
	bool ans = false;
	while (n--){
		cin >> bark;
		ans |= (bark == pw);
		fc[bark[0] - 'a']++;
		sc[bark[1] - 'a']++;
	}
	ans |= (sc[pw[0] - 'a'] > 0 && fc[pw[1] - 'a'] > 0);
	cout << (ans ? "YES" : "NO");
	return 0;
}