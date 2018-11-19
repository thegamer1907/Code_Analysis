#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

const int inf = 1<<29;
const int mod =(int)1e9+7;

int n, m;

int a[100010];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int t;
    string s;
    while(cin>>s)
    {
        bool flag = false;
        bool first_first = false, first_second = false, second_first = false,second_second=false;
        cin>>n;
        while(n --){
            string t;
            cin>>t;
            if(s == t) flag = true;
            if(s[0] == t[0]) first_first = true;
            if(s[0] == t[1]) first_second = true;
            if(s[1] == t[0]) second_first = true;
            if(s[1] == t[1]) second_second = true;
        }
        if(flag || first_second && second_first) puts("YES");
        else puts("NO");
    }
    return 0;
}