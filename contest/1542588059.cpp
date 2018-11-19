#include<iostream>

#include<fstream>
#include<istream>
#include<ostream>

#include<vector>
#include<deque>
#include<set>
#include<map>
#include<queue>

#include<string>
#include<cstring>
#include<sstream>

#include<cmath>
#include <stdlib.h>
#include<iomanip>
#include<algorithm>
#include<assert.h>

using namespace std;

#define PI		3.14159265
#define OO		1e6
#define S       second
#define F       first  
#define Mod		1000003

int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { -1, 1, 0, 0, 1, -1, 1, -1 };

void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}

//fstream out("output.txt", ios::in | ios::out);
//fstream in("input.txt", ios::in | ios::out);

//#define cout out
//#define cin  in 

int main()
{
	string pass;
	cin >> pass;
	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = 0; i < n; i++)
	{
		string temp = v[i];
		reverse(temp.begin(), temp.end());
		if (v[i] == pass || pass == temp)
		{
			cout << "YES";
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i ; j < n; j++)
		{
			string p1, p2;
			p1 += v[i][1];
			p1 += v[j][0];
			p2 += v[j][1];
			p2 += v[i][0];
			if (p1 == pass || p2 == pass)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "No";

}