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
#define INF 1000000000000LL

using namespace std;

int i, j, m, k, n , l , h;

int a[1000] , b[1000];

int main()
{

	cin>>n>>k;
	for (i = 0; i < n; i++){
		cin>>a[i];
		if (a[i] % 2) b[i] = 1; else b[i] = -1;
	}

	vector<int> v;
	int sum = 0;
	for (i = 0; i < n - 1; i++)
	{
		sum += b[i];
		if (sum == 0) v.push_back(abs(a[i] - a[i + 1]));
	}

	sort(v.begin() , v.end());

	int ans = 0;
	for (i = 0; i < v.size(); i++){
		if (k - v[i] >= 0){
			ans++;
			k -= v[i];
		}
	}

	cout<<ans<<endl;

	return 0;
}