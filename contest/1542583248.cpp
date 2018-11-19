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

int Lh,Rh,Lm,Rm,Ls,Rs;
int h,m,s,t1,t2;

void calch()
{
    if(m == 0 && s == 0) Lh = Rh = h;
    else Lh = h,Rh = h + 1;
    if(Rh == 13) Rh = 1;
}

void calcm()
{
    if(m % 5 == 0)
    {
        Lm = Rm = m == 0 ? 12 : m / 5;
        if(s) Rm ++;
        if(Rm == 13) Rm = 1;
    }
    else
    {
        Lm = m / 5 == 0 ? 12 : m / 5;
        Rm = Lm + 1;
        if(Rm == 13) Rm = 1;
    }
}

void calcs()
{
    Rs = Ls = s / 5 == 0 ? 12 : s / 5;
    if(s % 5) Rs ++;
    if(Rs == 13) Rs = 1;
}

int col[20],c1[20];
map<double,int> mp;

int main()
{
    h = read(),m = read(),s = read(),t1 = read(),t2 = read();
    calch();
    calcm();
    calcs();

    if(Lh == Rh) col[Lh] = 1;
    else mp[Lh == 12 ? 0.5 : Lh + 0.5] = 1;

    if(Lm == Rm) col[Lm] = 2;
    else mp[Lm == 12 ? 0.5 : Lm + 0.5] = 2;

    if(Ls == Rs) col[Ls] = 3;
    else mp[Ls == 12 ? 0.5 : Ls + 0.5] = 3;
/*
    cout << Lh << " " << Rh << endl;
    cout << Lm << " " << Rm << endl;
    cout << Ls << " " << Rs << endl;
*/
    c1[t1] = 4;

    if(!mp[t1 == 12 ? 0.5 : t1 + 0.5])
        for(int i = t1 + 1 == 13 ? 1 : t1 + 1;!col[i];i ++)
        {
            i = i == 13 ? 1 : i;
            if(col[i]) break;
            c1[i] = 4;
            if(mp[i == 12 ? 0.5 : i + 0.5]) break;
        }

    if(!mp[t1 - 0.5])
        for(int i = t1 - 1 == 0 ? 12 : t1 - 1;!col[i];i --)
        {
            i = i == 0 ? 12 : i;
            if(col[i]) break;
            c1[i] = 4;
        //    cout << i - 0.5 << " " << mp[i - 0.5] << endl;
            if(mp[i - 0.5]) break;
        }

    //for(int i = 1;i <= 12;i ++) cout << c1[i] << " "; puts("");

    if(c1[t2])
        puts("YES");
    else
        puts("NO");
    return 0;
}
