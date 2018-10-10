#include<bits/stdc++.h>
using namespace std;
map<string, int> counted;
int main()
{
	int a, b; cin >> a >> b;
	for(int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		counted[s]++;
	}
	int count_2 = 0;
	for(int j = 0; j < b; j++)
	{
		string s;
		cin >> s;
		counted[s]++;
		if(counted[s] == 2) count_2++;
	}
	if(count_2&1) b--;
	if(a > b) cout << "YES\n";
	else cout << "NO\n";
}
