#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string sh, ch;
int tail[27], head[27];
int main()
{
	int n, i;

	cin >> sh;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> ch;
		if (sh == ch) break;
		head[ch[1] - 'a' + 1] = 1;
		tail[ch[0] - 'a' + 1] = 1;
	}
	if (i <= n) cout << "YES";
	else if (head[sh[0] - 'a' + 1] && tail[sh[1] - 'a' + 1]) cout << "YES";
	else cout << "NO";
}