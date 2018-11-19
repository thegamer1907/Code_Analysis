#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <iterator>
#include <bitset>
#include <vector>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <time.h>
#include <algorithm>
#define mkp make_pair
#define inf 1000000010
#define MOD 1000000007
#define MOD2 1000000013
#define eps 1e-11
#define PI 3.14

using namespace std;
typedef long long ll;

int h, m, s, t1, t2;
int used[1000000];

int main()
{
	ios_base::sync_with_stdio(0);
	//ifstream cin("in.txt");
	cin >> h >> m >> s >> t1 >> t2;
	used[h*3600 + m*60 + s] = used[m*720 + s*12] = used[s*720] = 1;
	if (t1 > t2)
		swap(t1, t2);
	int cnt = 0;
	for (int i = t1 * 3600; i <= t2 * 3600 ; i++)
		cnt += used[i];
	if (cnt==0||cnt==3)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}