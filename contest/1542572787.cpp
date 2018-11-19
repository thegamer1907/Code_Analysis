#include <iostream>
#include <cstdio>
#include<list>
#include<iomanip>
#include<cmath>
#include<queue>
#include <functional>
#include<stdio.h>
#include<assert.h>
#include<stack>
#include<sstream>
#include <cstdlib>
#include<map>
#include<algorithm>
#include<iostream>
#include<set>
#include<utility>
#include<memory.h>
#include<string>
#include<vector>
#include<numeric>
using namespace std;
#define ll  long long
#define pb push_back
#define sz(v)               ((int)((v).size()))
#define all(x)          (x).begin(),(x).end()
#define REP(i, v)       for(int i=0;i<sz(v);i++)
typedef pair<int,int> pii;
#define ios std::ios_base::sync_with_stdio(false);
using namespace std;
int n,k;
set<int>s;
vector<int> v;
int main() {
	scanf("%d %d",&n,&k);
	while(n--){
		int t[4];
		for(int j = 0 ; j < k ; ++j) scanf("%d",&t[j]);
		int num = 0;
		for(int j = 0 ; j < k ; ++j) {
			num *= 2;
			num += t[j];
		}
		if(num == 0) {

			cout << "YES" << "\n";
			return 0;
		}
		s.insert(num);
	}
	n = sz(s);
	for(set<int>::iterator it = s.begin(); it != s.end() ; it++) {
		v.pb(*it);
	}
	//cerr << n << "\n";
	for(int msk = 1 ; msk < (1 << n) ; ++msk) {
		int p = __builtin_popcount(msk);
		int t[4];
		memset(t,0,sizeof(t));
		REP(i,v) {
			if(msk & (1 << i)) {
				for(int j = 0 ; j < k ; ++j) {
					if(v[i] & (1 << j)) t[j]++;
				}
			}
		}

		bool bad = 0;
		for(int j = 0 ; j < k ; ++j) {
			//cerr << t[j] << " ";
			if(t[j] > p / 2)
				bad = 1;
		}

		if(!bad) {
			cout << "YES" << "\n";
			return 0;
		}

	}

	cout << "NO" << "\n";
}
