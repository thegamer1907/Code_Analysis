#define _CRT_SBCURE_MO_DEPRECATE
#define fi first
#define se second
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
#include<functional>
using std::pair;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef pair<PII,int> PPI;
typedef pair<ll,int> PLI;
const double PI=acos(-1);
const int N = 100000 + 10;
const int M = 1000 + 10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
using namespace std;
int main()
{
    int n;
    int a[100010];
    cin>>n;
    int mi=INF;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mi=min(mi,a[i]);
    }
    int mm=mi-mi%n;
    for(int i=0;i<n;i++)
    {
        a[i]-=mm;
    }
    int t=0;
    int res=0;
    int f=0;
    for(int i=0;i<n;i++)
    {
        a[i]-=t;
        if(a[i]<=0)
        {
            res=i+1;
            f=1;
            break;
        }
        t++;
    }
    if(!f)
    for(int i=0;i<n;i++)
    {
        a[i]-=t;
        if(a[i]<=0)
        {
            res=i+1;
            break;
        }
        t++;
    }
    cout<<res<<endl;
}
