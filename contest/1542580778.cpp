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
	int h, m, s, t1, t2, zone1, zone2;
	cin >> h >> m >> s >> t1 >> t2;

	zone1 = zone2 = 0;
	if (t1 > t2)
		swap(t1, t2);

	if (h >= t1 && h < t2)
		zone1++;
	else
		zone2++;

	t1 *= 5; 
	t2 *= 5;

	// 0 after 60  , coz s > 0

	if (t1 > t2)
		swap(t1, t2);

	if (m >= t1 && m < t2 )
		zone1++;
	else
		zone2++;

	if (s >= t1 && s <= t2)
		zone1++;
	else
		zone2++;


	if (!zone1 || !zone2)
		cout << "YES";
	else
		cout << "NO";
}