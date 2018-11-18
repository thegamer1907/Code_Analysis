# include <iostream>
# include <string>
# include <vector>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	string s1;
	vector<string>v;
	bool test = false, test1 = false, test2 = false;
	for (int i = 0; i < n; i++){
		cin >> s1;
		if ((s == s1 ) || (s[0] == s1[1] && s[1] == s1[0]))
			test2 = true;
		if (s[0] == s1[1])
			test = true;
		else if (s[1] == s1[0])
			test1 = true;
	}
	if (test&&test1 || test2)cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}