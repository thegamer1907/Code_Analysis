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
#include <time.h> 
#include<chrono>
#include <stdio.h> 
#include <stdlib.h> 



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
LL inp;
vector<vector<char>>f;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(1000);
	LL dpw[100003]{ 0 },  dpws[100003]{ 0 };
	vector<int>sols;
	dpw[0] = 1;
	int n = 100001;
	const LL mo = 1000000007;
	int t, k, a,b;
	cin >> t >> k;
	FU(i, 1, n+1) {
		dpw[i]=dpw[i - 1];
		if (i >= k) {
			dpw[i] += dpw[i - k];
		}
		dpw[i] %= mo;
	}
	dpws[0] = 1;
	FU(i, 1, n + 1) {
		dpws[i] = dpws[i - 1] + dpw[i];
		dpws[i] %= mo;
	}
	
	FU(i, 0, t) {
		cin >> a >> b;
		sols.PB(dpws[b] -dpws[a - 1]);
	}
	GT(it, sols) {
	   
		cout << (it+mo)%mo<<endl;
	}
	
	return 0;
}