//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <utility>
#include <sstream>


#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define sqr(a) (a)*(a)

using namespace std;


typedef long long ll;


ll k, i, x, sum;

int main() {
    ios_base::sync_with_stdio(0);
//    freopen("", "r", stdin);
//    freopen("", "w", stdout);

    cin >> k;
    for (i = 1; i <= 11000000; i++) {
        x = i;
        sum = 0;
        while (x) {
            sum += x % 10;
            x /= 10;
        }

        if (sum == 10) k--;
        if (k == 0) {cout << i << endl; return 0;}
    }

    return 0;
}






