#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <limits>
#include <random>
#include <complex>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

#define REP(i,n) for(long long (i)=0;(i)<(long long)(n);(i)++)
#define RREP(i,n) for(long long (i)=(long long)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

int main() {

    string pass; cin >> pass;
    int n; cin >> n;
    vector<string> bark(n);
    REP(i,n) cin >> bark[i];

    bool flag1 = false, flag2 = false;
    REP(i,n) {
        if (pass[1] == bark[i][0]) flag1 = true;
        if (pass[0] == bark[i][1]) flag2 = true;
    }

    if (flag1 & flag2) {
        cout << "YES" << endl;
        return 0;
    }

    REP(i,n) {
        if (bark[i] == pass) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}