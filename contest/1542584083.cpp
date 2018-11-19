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


vector<vector<int> > vs;
int main()
{
	int n,k;
	cin >> n >> k;
	REP(i,n){
		vector<int> vr;
		REP(j,k){
			int nxt;
			cin >> nxt;
			vr.PB(nxt);
		}
		vs.PB(vr);
	}

	if(k==1){
		int cntz = 0;
		REP(i,n){
			if(vs[i][0]==0){
				cout << "YES" << endl; return 0;
			}
		}
		cout << "NO" << endl; return 0;
	}

	//all zeros
	REP(i,n){
		int cntz = 0;
		REP(j,k){
			if(vs[i][j]==0) cntz++;
		}
		if(cntz==k){
			cout << "YES" << endl; return 0;
		}
	}

	if(k==2){
		int cc1 = 0;
		int cc2 = 0;
		REP(i,n){
			if(vs[i][0]==0 && vs[i][1]==1){
				cc1++;
			}
			if(vs[i][0]==1 && vs[i][1]==0){
				cc2++;
			}
		}
		if(cc1>0 && cc2>0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		return 0;
	}

	int maxb = (1<<k)-1;
	for(int mask = 1; mask <= maxb; mask++){

		vector<int> digs;
		REP(i,k){
			if(mask & (1<<i)){
				digs.PB(1);
			}else{
				digs.PB(0);
			}
		}

		vector<int> comple;
		REP(i,k){
			comple.PB(1-digs[i]);
		}

		//check if this thing or some subset of it is present
		bool maskfound = false;
		bool otherfound = false;
		int otrindex = -1;
		REP(i,n){
			bool matchmask=true;
			bool otrofnd=true;
			REP(j,k){
				if(vs[i][j]!=digs[j]){
					matchmask=false;
				}

				if(vs[i][j]==1 && comple[j]==0){
					otrofnd=false;
				}
			}

			maskfound |= matchmask;
			otherfound |= otrofnd;
			if(otrofnd) otrindex=i;
		}

		//cout << " " << maskfound << endl;
		if(maskfound && otherfound){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
