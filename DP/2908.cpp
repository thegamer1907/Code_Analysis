#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#define IO ios::sync_with_stdio(false);\
    cin.tie(0);\
    cout.tie(0);
using namespace std;
const int maxn = 1e5+10;
const int mod = 1e9+7;
typedef long long LL;

int a,b;
int cnt[maxn];
int c2[maxn];

bool judge()
{
    int now = -1,tot = 0;
    for(int i=0;i<a;i++)
    {
        if(cnt[i]==0)
            cnt[i] = c2[tot++];
        if(cnt[i]<=now)
            return true;
        now = cnt[i];
    }
    return false;
}
int main()
{
    IO;
    cin>>a>>b;
    for(int i=0;i<a;i++)
        cin>>cnt[i];
    for(int i=0;i<b;i++)
        cin>>c2[i];
    sort(c2,c2+b,[](const int &x,const int &y)
         {
             return x>y;
         });
    cout<<(judge()?"Yes":"No")<<endl;
    return 0;
}
