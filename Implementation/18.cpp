#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <queue>
#include <bitset>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <random>
#include <chrono>
#include <ctime>
#include <unordered_set>
#define ll long long
#define ld long double
using namespace std;
int inf = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //mt19937 rd(chrono::system_clock::now().time_since_epoch().count());
    ios::sync_with_stdio(0), cin.tie(0);

  	int n, a, b, c = 0, mx = 0;
  	cin >> n >> a >> b;
  	a--, b--;
  	while (a != b)
  		c++, a >>= 1, b >>= 1;

  	while (n > 1)
  		n >>= 1, mx++;

  	if (c == mx)
  		cout << "Final!";
  	else
  		cout << c;
}   