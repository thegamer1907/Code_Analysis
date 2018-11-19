/*
* @Author: wchhlbt
* @Last Modified time: 2017-10-03
*/
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define pb push_back
#define AA first
#define BB second
#define ONES(x) __builtin_popcount(x)
#define _  << "  " <<
using namespace std;

typedef long long ll ;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const double eps =1e-8;
const int mod = 1000000007;
const double PI = acos(-1.0);
inline int read(){ int num;    scanf("%d",&num);   return num;}
const int maxn = 2007;

int f1,f2,f3;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    t1 %= 12;   t2 %= 12;   h %=12;
    if(t1>t2)   swap(t1,t2);
    if(t1<=h && h<t2)   f1 = 1;
    if(5*t1<=m && m<5*t2)   f2 = 1;
    if(5*t1<=s && s<5*t2)   f3 = 1;
    if(f1+f2+f3==3 || f1+f2+f3==0)  puts("YES");
    else    puts("NO");
    return 0;
}