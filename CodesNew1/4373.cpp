#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	string s[n], t[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	t[n - 1] = s[n - 1];
	for (int i = n - 2; i > -1; i--) {
		int j = 0, flag = 0;
		while(1) {
			if (s[i][j] == t[i + 1][j])
				t[i] += s[i][j];
			else if (s[i][j] < t[i + 1][j]) {
				t[i] = s[i];
				flag = 1;
			}
			else
				flag = 1;
			j++;
			if (flag == 1 || j == s[i].size())
				break;
		}
	}
	for(int i = 0; i < n; i++)
		cout << t[i] << endl;
	return 0;
}