#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
#include <sstream>
#include <functional>
#include <algorithm>
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>

#define INF 0x3f3f3f3f
#define EXP 1e-8
#define MEM(a,x) memset(a,x,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define ll long long
#define LL long long
const double PI = acos(-1.0);

using namespace std;


int main() {
    int n, k, t, cnt = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    t = arr[k - 1];
    sort(arr, arr + n);
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= t && arr[i] > 0)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}
