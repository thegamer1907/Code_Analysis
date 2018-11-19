//  LINK ZADATKA: http://codeforces.com/contest/868/problem/A

#include <queue>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <complex>
#include <fstream>
#include <cstring>
#include <string>
#include <climits>

using namespace std;

typedef long long ll;
typedef complex<double> point;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;

#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define FOR(k,a,b) for(int k=(a); k<=(b); ++k)
#define REP(k,a) for(int k=0; k<(a);++k)
#define SZ(a) int((a).size())
#define ALL(c) (c).begin(),(c).end()
#define PB push_back
#define MP make_pair
#define INF 999999999
#define INFLONG 1000000000000000000
#define MOD 1000000007
#define MAX 100
#define ITERS 100
#define MAXM 200000
#define MAXN 1000000
#define _gcd __gcd
#define eps 1e-9

int n; char d[150][3], rijec[3];
bool si;
int main(){ 
	
	scanf("%s", rijec);
	
	sd(n);
	si = 0;
	REP(i, n){
		scanf("%s", d[i]);
		
		if(d[i][0] == rijec[0] && d[i][1] == rijec[1]) si = 1;
	
	}
	
	REP(i, n){
		REP(j, n){
			if(d[i][1] == rijec[0] && d[j][0] == rijec[1]) si = 1;
		}
	}
	if(si) printf("YES\n");
	else printf("NO\n");
	return 0;
}
