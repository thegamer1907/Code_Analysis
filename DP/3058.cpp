#define SUBMIT
#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/STACK:160777216")
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <sstream>

#define VVC vector< vector<char> >
#define PI acos(-1.0)
#define VI vector<int>
#define PII pair<int,int>
#define MP make_pair
#define eps 1e-9
#define ll long long
#define ull unsigned long long
#define f0(i, n) for (int i = 0; i < n; i++)
#define NMAX 500000
#define INF 1000000000000000LL

using namespace std;

int i, j, m, k, n , l , h , p , q;

int a[10000] , c[10000] , d[100000] , ans[10000];

int main()
{
	cin>>n;
	for (i = 0 ;i < n; i++) cin>>a[i];
	for (i = 0 ;i < n; i++) cin>>c[i];
	for (i = 0; i < n; i++) d[i] = ans[i] = 1000000000;

	for (i = 0; i < n; i++){
		for (j = 0; j < i; j++){
			if (a[j] < a[i]) d[i] = min(d[i] , c[i] + c[j]);
		}
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < i; j++){
			if (a[j] < a[i] && d[j] < 1000000000){
				ans[i] = min(ans[i] , d[j] + c[i]);
			}
		}
	}

	int pas = 1000000000;

	for (i = 0; i < n; i++) pas = min(pas , ans[i]);

	if (pas == 1000000000) cout<<-1<<endl; else cout<<pas<<endl;
	return 0;
}

