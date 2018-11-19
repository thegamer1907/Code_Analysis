#include <algorithm>
#include <iostream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define foreach(i,x) for(type(x)i=x.begin();i!=x.end();i++)
#define FOR(ii,aa,bb) for(int ii=aa;ii<=bb;ii++)
#define ROF(ii,aa,bb) for(int ii=aa;ii>=bb;ii--)

#define dbgs(x) cerr << (#x) << " --> " << (x) << ' '
#define dbg(x) cerr << (#x) << " --> " << (x) << endl

#define type(x) __typeof(x.begin())

#define mid (bas + son >> 1)
#define right (k + k + 1)
#define left (k + k)

#define pb push_back
#define mp make_pair

#define nd second
#define st first

#define SET(A,b) memset(A,b,sizeof (A) )

#define mod 1000000007
#define inf mod

#define endl '\n'
#define endll puts("")

#define N 1000005

typedef pair < int , int > pii;

typedef long long ll;

int n, f1, f2;
char a1, a2;

int main () {
	cin >> a1 >> a2 >> n;
	FOR(i, 1, n){
		char b1, b2;
		cin >> b1 >> b2;
		if(b1 == a1 and b2 == a2){
			f1 = 1;
			f2 = 1;
		}
		if(b2 == a1)
			f1 = 1;
		if(b1 == a2)
			f2 = 1;
	}
	if(f1 and f2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
