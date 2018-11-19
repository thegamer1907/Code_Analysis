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
#include <cassert>

using namespace std;

//macros
typedef long long ll;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;


#define FOR(k,a,b) for(int k=(a); k<=(b); ++k)
#define REP(k,a) for(int k=0; k<(a);++k)
#define SZ(a) int((a).size())
#define ALL(c) (c).begin(),(c).end()
#define PB push_back
#define MP make_pair
#define INF 1000000001
#define INFLONG 1000000000000000000
#define MOD 1000000007
#define MAX 100
#define ITERS 100
#define MAXM 200000
#define MAXN 1000000
#define _gcd __gcd
#define eps 1e-9
#define PI 3.1415926535897932384626



int main()
{
	string pass;
	cin >> pass;
	char ch1 = pass[0];
	char ch2 = pass[1];
	//cout << ch2 << endl;
	int n;
	cin >> n;
	vector<string> words;
	vector<int> v1,v2;
	REP(i,n){
		string nxt;
		cin >> nxt;
		if(nxt==pass){
			cout << "YES" << endl;
			return 0;
		}
		if(nxt[0]==ch2){
			v1.PB(i);
		}
		if(nxt[SZ(nxt)-1]==ch1){
			v2.PB(i);
		}
	}
	if(SZ(v1)>=1 && SZ(v2)>=1){
		cout << "YES"<<endl;
	}else{
		cout << "NO" << endl;
	}
}
