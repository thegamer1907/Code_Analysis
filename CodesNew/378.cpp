#include<iostream>
#include<stdio.h>
#include<stdlib.h>     /* atoi */
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<limits>
#include<limits.h>
#include<utility>
#include<string>
#include<string.h>
#include<cstring>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<list>
#include<stack>
#include<bitset>
#include <stdio.h>
#include <stdlib.h>
#include <bitset>

/*for(int i = 0; i < ; i++)*/
#define _CRT_SECURE_NO_DEPRECATE
typedef unsigned long long ll;
const double eps = 1e-9;
using namespace std;
void init()
{
  	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
}

bool cmp(string y, string x)
{
    if(y.size() == x.size())
        return y < x;
    return y.size() < x.size();
}
bool isPrime(int x)
{
    if(x==1)
        return 0;
    for(int i = 2; i*i <= x; i++)
       if(x%i == 0)
            return 0;
    return 1;
}
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}
vector<vector<int> > g;
vector<int> maxpath;
void DFS(int u, int p) {
	for (int i = 0; i < g[u].size(); ++i) {
		if (g[u][i] != p) {
            maxpath[g[u][i]]+= maxpath[u] + 1;
			DFS(g[u][i], u);

        }
	}
}

int main()
{
    init();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n ,t, sum = 0,l = 0, r = 0, cnt = 0;
    int a[100005];
    cin >> n >> t;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    while(r != n)
    {
        sum+= a[r];
        if(sum <= t)
            cnt = max(cnt, r-l+1);
        while(sum > t)
            sum-=a[l++];
        r++;
    }
    cout << cnt << "\n";
	return 0;
}