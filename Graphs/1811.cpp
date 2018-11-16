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
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define FOR(i,n) for(int i=1;i<=n;i++)
#define For(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[105]= {0},b[105]= {0};
    FOR(i,n)
    cin>>a[i];
    cin>>m;
    FOR(i,m)
    cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    int as=0,ct=1;
    int i=1;
    while(i<=n and ct<=m)
    {
        if(abs(a[i]-b[ct])<=1)
            ct++,as++,i++;
        else if(b[ct]<a[i]) ct++;
        else i++;
    }
    cout<<as<<endl;

    return 0;
}
