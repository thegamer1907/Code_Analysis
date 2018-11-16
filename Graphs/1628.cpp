#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <fstream>
#include <map>
//#include <conio.h>
#include <iterator>
using namespace std;

typedef string s;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef pair<int, int> pii;
typedef vector <double> vd;
typedef unsigned long long  ull;

#define all(a) (a).begin(), (a).end()
#define forn(n) for(int i=0;i<n;i++)
#define forn_j(n) for(int j=0;j<n;j++)
#define c cout<<endl;

int main()
{
/*	#ifdef _DEBUG
	#else
	freopen("input.in", "r", stdin);
//		freopen("output.out", "w", stdout);
	#endif
*/
	int n, t;
	cin >> n >> t;
	vi a(n - 1);

	forn(n - 1) cin >> a[i];

	forn(n - 1) {
		if ((i + 1 + a[i]) == t) { cout << "YES"; return 0; }
		i +=a[i]-1;
	}
	cout << "NO"; 

//	_getch();
	return 0;
}