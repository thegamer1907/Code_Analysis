#include <iostream>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iomanip>
#include <bitset>
#include <fstream>
#include <utility>
#include <deque>

using namespace std;

#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define pob pop_back
#define p_q priority_queue
#define good inline

typedef long long ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair <int, int> pii;

int n, h, a, cnt;

int main () {
    cin >> n >> h;
    cnt = n;
    while (n--) {
        cin >> a;
        a > h ? cnt++ : cnt = cnt;
    }
    cout << cnt << '\n';
    return false;
}