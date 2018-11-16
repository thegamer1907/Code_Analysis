#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <climits>
#include <limits>
#include <algorithm>
#include <iostream>
#include <set>
#include <fstream>
#include <istream>
#include <ostream>
#include <queue>
#include <bitset>
#include <map>
#include <stack>
#include <ctype.h>

using namespace std;

#define ll long long


int main() {
    ll aSum = 0, bSum = 0, cSum = 0,a,b,c,n;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;

        aSum += a; bSum += b; cSum += c;
    }

    cout << ( (aSum == 0 && bSum == 0 && cSum == 0) ? "YES" : "NO" ) << endl;


    return 0;
}