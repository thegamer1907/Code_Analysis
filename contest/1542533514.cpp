#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string pass;
int n;
const int MAXN = 105;
string words[MAXN];
bool start[26], finish[26];

int main()
{
	cin >> pass >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> words[i];
		if(pass == words[i])
		{
			cout << "YES\n";
			return 0;
		}
		start[words[i][1] - 'a'] = true;
		finish[words[i][0] - 'a'] = true;
	}

	if(start[pass[0] - 'a'] && finish[pass[1] - 'a'])
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}