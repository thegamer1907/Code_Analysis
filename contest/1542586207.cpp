#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);


	string fs;
	cin >> fs;

	int n;
	cin >> n;

	int fi, si;
	fi = si = -1;


	bool flag = false;

	while(n-- > 0)
	{
		string t;
		cin >> t;

		if(t[1] == fs[0]) fi = 1;

		if(t[0] == fs[1]) si = 0;

		if((fi == 1 && si == 0) || fs == t)
		{
			flag = true;
			break;
		}
	}
	
	if(flag) cout << "YES";
	else cout << "NO";

	return 0;
}