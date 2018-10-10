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
#include<set>
#include<map>
using namespace std;
#define LL long long
#define pi (4*atan(1.0))
#define eps 1e-8
#define bug(x)  cout<<"bug"<<x<<endl;
const int N=2e5+10,M=2e6+10,inf=1e9+10;
const LL INF=1e18+10,mod=1e9+7;

int a[N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;;
        scanf("%d",&x);
        a[i]=a[i-1]+x;
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",lower_bound(a+1,a+1+n,x)-a);
    }
    return 0;
}
