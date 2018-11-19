#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
#define LL long long
#define bug(x)  cout<<"bug"<<x<<endl;
const int N=1e4+10,M=1e6+10,inf=1e9+10,MOD=1e9+7;
const LL INF=1e18+10,mod=1e9+7;
const double eps=(1e-8),pi=(4*atan(1.0));

string a[N];
int main()
{
    cin>>a[0];
    int n,flag1=0,flag2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==a[0])return 0*puts("YES");
        if(a[i][1]==a[0][0])flag1=1;
        if(a[i][0]==a[0][1])flag2=1;
    }
    if(flag1&&flag2)puts("YES");
    else puts("NO");
    return 0;
}

