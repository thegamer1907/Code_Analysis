#include <iostream> 
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string ans;
	int n;
	cin >> ans >> n;
	int a = 0, b = 0;
	string m;
	while (n--)
	{
		cin >> m;
		if (m == ans)
		{
			a = 1;b = 1;
			break;
		}
		if (m[0] == ans[1])a = 1;
		if (m[1] == ans[0])b = 1;
	}
	if (a == 1 && b == 1)cout << "Yes" << endl;
	else cout << "No" << endl;
}