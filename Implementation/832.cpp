#include<bits/stdc++.h>
using namespace std;

int ar[5];

int main() {

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;

	for (int j = 1; j <= t; j++)
	{
		for (int i = 1; i < n; i++)
		{
			if (s[i] == 'G' && s[i - 1] == 'B')
			{
				swap(s[i], s[i - 1]);
				i++;
			}
		}
	}

	cout << s<<endl;

	int pause;
	cin >> pause;

	return 0;
}