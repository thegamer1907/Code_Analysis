/*-----------------------------------------------
					Filename: B.cpp
					Author: TanYz
					Date: 2018.06.18
-----------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define mpii(a, b) make_pair(a, b)
const int maxn = 11000000;
const int INF = 1 << 30;
const double eps = 1e-6;
const int mod = 1000000007;

int k;
vector<int> ans;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	for(int i = 19; i < maxn; i++) {
		int tmp = i, sum = 0;
		while(tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if(sum == 10) ans.push_back(i);
	}
	cin >> k;
	cout << ans[--k] << endl;
	return 0;
}
