#define _CRT_SECURE_NO_DEPRECATE
#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <queue>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
/*--------------------------------*/
#define pb push_back
#define INT_MIN (1 << 31)
#define INT_MAX ~(1 << 31)
#define LL_MIN -9223372036853775808
#define LL_MAX  9223372036853775807
#define lower(c) char(32 | c)
#define upper(c) char(~32 & c)
#define FOR(i, a, b) for (int i = a; i <= (int)b; i++)
#define RFOR(i, a, b) for (int i = a; i >= (int)b; i--)
#define FORIT(i, a, b) for (auto i = a; i != b; i++)
#define R freopen("input.txt", "r", stdin); //input.txt
#define W freopen("output.txt", "w", stdout);
#define MOD ll(1000000007)
#define PI acos(-1)
#define SET(a,b) memset(a,b,sizeof a)
//int dx[] = { -1, -1, 0, 1, 1, 1, 0, -1 };
//int dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
//int dx[] = { -1, 0, 1, 0 };
//int dy[] = { 0, 1, 0, -1 };
/*-------------------------------------------------------------*/


int main() {


	int n;
	char pass[3], str[100][3];
	bool yes = 0;

	scanf("%s %d", &pass, &n);
	FOR(i, 0, n - 1) scanf("%s", &str[i]);

	FOR(i, 0, n - 1){
		if (pass[0] == str[i][0] && pass[1] == str[i][1]) yes = 1;
		else if (pass[0] == str[i][1]){
			FOR(j, 0, n - 1){
				if (pass[1] == str[j][0])yes = 1;
			}
		}
		if (yes)break;
	}
	
	puts(yes ? "YES" : "NO");

	return 0;
}