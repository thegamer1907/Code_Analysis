#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <time.h>
#include <math.h>
#include <ctime>
#include <map>
#include <queue>
#include <stack>
#include <stdlib.h>
#define ms(a,b) memset(a,b,sizeof(a))
#define FR(i,k,n) for(int i=k;i<=n;++i)
#define fr(i,k,n) for(int i=k;i>=n;--i)
#define mod 1000000007
typedef long long ll;
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[105]={0},ans=0;
        FR(i,1,n)
        {
            cin>>a[i];
            if(a[i]) a[i]=-1,ans++;
            else a[i]=1;
        }
        int mx=-2,k=0;
        FR(i,1,n)
        {
            k+=a[i];
            if(k>mx) mx=k;
            if(k<0) k=0;
        }
        cout<<mx+ans<<endl;
    }
    return 0;
}