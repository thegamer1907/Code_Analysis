#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
//#define max(a, b) (a > b ? a : b)
//#define min(a, b) (a < b ? a : b)
//std::ios::sync_with_stdio(false);
using namespace std;
int a[100];
int n, m;
int main()
{
    cin >> n >> m;
    int ansmax = 0, ansmin = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = (a[i] > maxi ? a[i] : maxi);
    }
    ansmax = maxi + m;
    int minus = 0;
    for (int i = 0; i < n; i++)
        minus += maxi - a[i];
    if (minus < m)
    {
        m -= minus;
        ansmin = maxi;
        ansmin += m / n;
        if (m % n)
            ansmin++;
    }
    else
    {
        ansmin = maxi;
    }
    cout << ansmin << ' ' << ansmax << endl;
}