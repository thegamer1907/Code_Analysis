#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

	string pwd;
	cin >> pwd;
	int n;
	cin >> n;
	vector<string> words;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		words.push_back(s);
	}
	bool flag = false;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (words[i][1] == pwd[0] && words[j][0] == pwd[1]) {
				cout << "YES"<<endl;
				flag = true;
				break;
			}	
		}
		if (flag )
			break;
		if (words[i][0] == pwd[0] && words[i][1] == pwd[1])
		{
			cout << "YES" << endl;
			flag = true;
			break;
		}
		
	}

	//if()
	if (!flag)
		cout << "NO" << endl;
//	system("pause");
	return 0;
}