#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <climits>
#include <iomanip>
#include <queue>
#include <list>
#include <cstring>
#include <math.h>
#include <fstream>

#define rep(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define rrep(i, a, b) for (int i = (a), i##_end_ = (b); i > i##_end_; --i)
#define vi vector<int>
#define pii pair<int,int>
#define pis pair<int,string>
#define pss pair<string,string>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ld;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s,c;
    cin >> s;
    int n,flag=0,f1=0,f2=0;
    cin >> n;

    while(n--)
    {
        cin >> c;
        if(s==c) flag=1;
        if(s[0]==c[1] && s[1]==c[0]) flag=1;
        if(s[0]==c[1]) f1=1;
        if(s[1]==c[0]) f2=1;
    }
    if(flag==0)
        flag=f1&f2;

    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}


