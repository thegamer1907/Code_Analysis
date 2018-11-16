//#pragma comment(linker, "/STACK:16777216")
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	a--;
	b--;
	vector<int> teams(n);
	for (int i = 0; i < n; i++)
		teams[i] = i;
	bool flag = false;
	int count = 0;
	while (!flag)
	{
		for (int i = 0; i < teams.size(); i += 2)
		{
			if ((teams[i] == a && teams[i + 1] == b) || (teams[i] == b && teams[i + 1] == a))
				flag = true;
			else if (teams[i] == a || teams[i] == b)
				teams[i + 1] = -1;
			else if (teams[i + 1] == a || teams[i + 1] == b)
				teams[i] = -1;
			else
				teams[i] = -1;
		}
		vector<int> teamstmp;
		for (auto i = teams.begin(); i != teams.end(); i++)
		{
			int tmp = *i;
			if (tmp != -1)
				teamstmp.push_back(tmp);
		}
		teams = teamstmp;
		count += 1;
	}
	if (teams.size() == 2)
		cout << "Final!";
	else
		cout << count;
	return 0;
}