#include<bits/stdc++.h>
using namespace std;

int ar[200009];

int main() {

	string word;
	cin >> word;

	for (int i = 1; i < (int)word.size(); i++) {
		ar[i] = ar[i - 1];
		if (word[i - 1] == word[i])
		{
			ar[i]++;
		}
	}

	int q;
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int u, v;
		cin >> u >> v;
		int res = ar[v-1] - ar[u-1];
		cout << res << endl;
	}


	int pause;
	cin >> pause;

	return 0;
}