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
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        cout<<a-b<<endl;
        return 0;
    }
    int ans=0;
    while(a<b)
    {
        if(b%2) ans++,b++;
        else ans++,b/=2;
    }
    ans+=abs(a-b);
    cout<<ans<<endl;
    return 0;
}