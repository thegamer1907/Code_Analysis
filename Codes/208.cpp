#include <cassert>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<complex>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<string>
#include<cstdlib>
#include<memory.h>
#include<ctime>
#include<bitset>
#include<fstream>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<functional>

#define GT(it,v) for(auto it:v)
#define FU(i,a,b) for(int i=(a);i<(b);i++)
#define FD(i,a,b) for(int i=(a);i>(b);i--)
#define LL long long
#define LD long double
#define PI 3.1415926535897932384626
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define VLL vector<long long > 
#define VVLL vector<vector<long long > >
#define VP vector<pair<long long, long long>>
#define MP make_pair
#define PB push_back 
#define FI first
#define SE second
#define SORT(v) sort(v.begin(),v.end())
#define GSORT(v,what) sort(v.begin(),v.end(),greater<what>())
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(1000);
	int n, m, k;
	cin >> n;
	vector<LL>v,q;
	FU(i, 0, n) {
		cin >> k;
		if (i == 0) {
			v.PB(k);
		}
		else {
			v.PB(k + v.at(i - 1));
		}
	}
	cin >> m;
	FU(i, 0, m) {
		cin >> k;
		q.PB(k);
	}
	if (n == 1) {
		FU(i, 0, m) {
			cout << 1 << "\n";
			return 0;
		}
	}
	FU(i, 0, m) {
		int beg = 0, fin = n - 1;
		while (beg != fin) {
			if (v.at((beg + fin) / 2) < q.at(i)) {
				beg = (beg + fin) / 2 + 1;
				if (v.at(beg) > q.at(i)) {
					cout << beg+1<<"\n";
					break;
				}
			}
			else{
				fin = (beg + fin) / 2;
			}
			if (beg == fin) {
				cout << beg+1<<"\n";
				break;
			}
		}
	}


	return 0;
}

