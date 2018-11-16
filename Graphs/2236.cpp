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
int a[4];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(1000);
	LL n;
	cin >> n;
	int e[3000];
	FU(i, 1, n+1) {
		cin >> e[i];
	}
	int r = 0;
	FU(i, 1, n+1) {
		int k = 1;
		int j = i;
		while (e[j] != -1) {
			j = e[j];
			k++;
		}
		r = max(r, k);
	}
	cout << r;

	return 0;
}