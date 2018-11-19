#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <queue>

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;

#define MP make_pair
#define PB push_back
#define FF first
#define SS second

#define FORN(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n) - 1; i >= 0; i--)

#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }

#define MOD 1000000007
#define INF 2000000000

int GLL(LL& x) {
    return scanf("%lld", &x);
}

int GI(int& x) {
    return scanf("%d", &x);
}

string password, word;

int n;

int main() {
    cin >> password;

    GI(n);

    bool s = false;
    bool e = false;

    FORN(i, n) {
        cin >> word;

        if (word == password) {
            printf("YES\n");
            return 0;
        }

        if (password[0] == word[1]) {
            s = true;
        }
        if (password[1] == word[0]) {
            e = true;
        }
    }

    if (s && e) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}
