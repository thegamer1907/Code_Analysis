#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <cassert>
#include <ctime>

#define nullptr 0
 
#define x first
#define y second
//#define int ll
#define pb push_back
#define mp make_pair
#define sqr(a) ((a) * (a))
 
using namespace std;
 
typedef long long ll;

const int N = 501000;

bool check(string s, string a, string b)
{
	size_t pos = s.find(a);
	//cout << pos << ' ';
	if(pos == string::npos)
		return 0;
	//cout << pos << endl;
	pos = s.find(b, pos + a.size());
	return pos != string::npos;
}

signed main()
{
	srand(time(0));
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	string s;
	cin >> s;
	cout << (check(s, "AB", "BA") || check(s, "BA", "AB") ? "YES" : "NO");
	return 0;
}		