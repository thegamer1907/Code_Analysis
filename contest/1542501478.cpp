#include <iostream>
#include <sstream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <utility>
#include <string>
#include <cmath>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#define eps 1e-8

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int dir[9][2] = { 0, 1, 0, -1, 1, 0, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1, 0, 0 };
const ll  ll_inf = 1e18;
const double pi=acos(-1.0);
const int inf = 0x3f3f3f;
const int mod = (int) 1e9 + 7;
const int Max = (int) 2e3+11;
stringstream ss;

//
// tools:
// freopen("in.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// ios::sync_with_stdio(false);
//




int main() {


    string s;
    cin>>s;
    int n;
    cin>>n;
    int flag=0;
    int a=0,b=0;
    for(int i=0;i<n;++i)
    {
        string temp;
        cin>>temp;
        if(temp==s)
            flag=1;
        if(temp[0]==s[1])
            a=1;
        if(temp[1]==s[0])
            b=1;
    }
    if(a&&b)
        flag=1;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
