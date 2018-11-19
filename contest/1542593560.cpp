#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<queue>
#include<cmath>
#include<vector>
#include<ctime>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;
const int SZ = 1000010;
const LL INF = 1000000010;
const LL mod = 1000000007;
const int Dx[] = {0,1,0,-1};
const int Dy[] = {1,0,-1,0};


LL read()
{
    LL n = 0;
    char a = getchar();
    int flag = 0;
    while(a < '0' || a > '9') { if(a == '-') flag = 1; a = getchar(); }
    while(a >= '0' && a <= '9') n = n * 10 + a - '0',a = getchar();
    if(flag) n = -n;
    return n;
}

string s,str[SZ];
int n;

bool check()
{
    for(int i = 1;i <= n;i ++)
        if(str[i] == s) return true;
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++)
        {
            string ss;
            ss += str[i][1];
            ss += str[j][0];
            if(ss == s) return true;
        }
    return false;
}


int main()
{
    cin >> s;
    n = read();
    for(int i = 1;i <= n;i ++) cin >> str[i];
    puts(check() ? "YES" : "NO");
    return 0;
}
