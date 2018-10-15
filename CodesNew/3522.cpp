#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<map>
#include<stack>
#include<vector>
#include<queue>
#include<set>
#include<algorithm>
#define max(a,b)   (a>b?a:b)
#define min(a,b)   (a<b?a:b)
#define swap(a,b)  (a=a+b,b=a-b,a=a-b)
#define maxn 320007
#define N 100000000
#define INF 0x3f3f3f3f
#define mod 1000000009
#define e  2.718281828459045
#define eps 1.0e18
#define PI acos(-1)
#define lowbit(x) (x&(-x))
#define read(x) scanf("%d",&x)
#define put(x) printf("%d\n",x)
#define memset(x,y) memset(x,y,sizeof(x))
#define Debug(x) cout<<x<<" "<<endl
#define lson i << 1,l,m
#define rson i << 1 | 1,m + 1,r
#define ll long long
//std::ios::sync_with_stdio(false);
//cin.tie(NULL);
using namespace std;


int a[1111];
int main()
{
    int n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    if((sum+m)%n==0)
        cout<<max((sum+m)/n,a[n-1])<<" "<<a[n-1]+m<<endl;
    else
        cout<<max((sum+m)/n+1,a[n-1])<<" "<<a[n-1]+m<<endl;
    return 0;
}
