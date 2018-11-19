#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
#define pd(x) printf("%d\n",x)
#define cls(a,x) memset(a,x,sizeof(a))
const double eps=1e-8;
const double PI=acos(-1.0);
const int INF=1e9+10;
const int MOD=1e9+7;
const int N=1e6+10;
//int a[N];
//char s[N];
string s1,s2;
int main()
{
    int n;
    cin>>s1;
    int f1=0,f2=0;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s2;
        if(s2[0]==s1[0]&&s1[1]==s2[1]) f2=1,f1=1;
        if(s2[0]==s1[1]) f2=1;
        if(s2[1]==s1[0]) f1=1;
    }
    if(f1&&f2) puts("YES");
    else puts("NO");
    return 0;
}