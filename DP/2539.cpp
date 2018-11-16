#define push_back pb
#define make_pair mk
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<map>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<stack>
using std::pair;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,int>PII;
const double PI=acos(-1);
const int maxn = 2e5 + 10;
const int INF = 0x3f3f3f3f;
const int mod =998244353;
const ll inf =1e18;
using namespace std;
int main()
{
    int n,a[100010];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int res=1;
    int t=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
            t=1;
        }
        else
        {
            t++;
            res=max(t,res);
        }
    }
    cout<<res<<endl;
}
