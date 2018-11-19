#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <stack>
#include <cstring>
#include <functional>
#include <queue>
#include <set>
#include <map>
using namespace std;



#define ll long long
#define clr(x, y) memset(x, y, sizeof(x))
#define LL rt << 1
#define RR rt << 1 | 1
#define lson l, m, LL
#define rson m + 1, r, RR
const int INF = 0x3f3f3f3f;
const ll maxn = 100008;
const ll Mod = 1e9 + 7;
inline ll gcd(ll a, ll b)
{
    return a % b == 0 ? b : gcd(b, a % b);
}
inline ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

#define N 3000000 + 10

int main(void)
{
    string s,s1;
    while(cin>>s){
        int n;
        cin>>n;
        int flag1=0,flag2=0;
        for(int i=1;i<=n;i++)
        {
            cin>>s1;
            if(s1[0]==s[1])flag1=1;
            if(s1[1]==s[0])flag2=1;
            if(s1==s){flag1=flag2=1;}
        }
        if(flag1&&flag2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}