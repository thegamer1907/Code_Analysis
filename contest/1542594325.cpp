#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <cmath>

using namespace std;

typedef int INT;
typedef long long ll;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define left lef1093i13jfjdsjfd2139371024
#define right regi213t4328789236437297483779299234

/*
const bool operator < (const Item &v1, const Item &v2) {
	return 0;
}
*/


void re() {
    vector<int> b(1e10); // it must give RE
}

INT main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    string a;
    cin >> a;
    int n;
    cin >> n;
    bool first = false, second = false;
    for (int i = 0; i < n; ++i) {
        string cur;
        cin >> cur;
        if (a == cur) {
            cout << "YES";
            return 0;
        }
        if (a[0] == cur[1]) second = true;
        if (a[1] == cur[0]) first = true;
    }
    if (first && second)
        cout << "YES";
    else
        cout << "NO";
}
