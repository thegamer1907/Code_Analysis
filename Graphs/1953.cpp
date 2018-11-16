// IN THE NAME OF GOD 
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

const int MAXN = 128;
int n , m , a[MAXN] , b[MAXN], c[MAXN] , cnt, cnt1;

int main () {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i], c[i] = b[i];
    sort (a, a + n);
    sort (b, b + m);
    sort (c, c + m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] + 1 == b[j] || a[i] - 1 == b[j] || a[i] == b[j]) {
                cnt1 ++;
				b[j] = 1000;
                break;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i] + 1 == a[j] || c[i] - 1 == a[j] || c[i] == a[j]) {
                cnt ++;
                a[j] = 1000;
                break;
            }
        }
    }
    cout << max(cnt, cnt1) << '\n';
    return false;
}