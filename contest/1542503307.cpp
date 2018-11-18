// Shalin
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iomanip>
#include <map>  
#include <complex>
#include <set>

using namespace std;
#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x);
#define sc(x) scanf("%c",&x);
#define ss(x) scanf("%s",x);
#define sd(x) scanf("%lf",&x);
#define bitcount __builtin_popcount
#define gcd __gcd
#define llu long long unsigned int
#define lli long long int
#define fi first
#define se second
#define pb push_back
#define mod 1000000007
#define mp make_pair
#define vi vector<int>
#define vlli vector<long long int>
#define pii pair<int,int>
int cnt[100010];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k;
    si(n);si(k);
    memset(cnt,0,sizeof(cnt));
    for(i=0;i<n;i++)
    {
        int temp=0;
        for(j=0;j<k;j++)
        {
            int x;si(x);
            temp=temp+(x*(1<<(3-j)));
        }
        // cout<<temp<<endl;
        cnt[temp]++;
    }    
    if(cnt[0]!=0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=1;i<(1<<16);i++)
    {
        bool flag=0;
        int mask=i;
        vi vec;
        for(j=0;j<16;j++)
        {
            if(cnt[j]!=0 and (((mask>>j)&1)))
            {
                vec.pb(j);
            }
        }
        int sz=vec.size();
        if(sz==0)
            continue;
        int tempcnt[4]={0,0,0,0};
        for(j=0;j<sz;j++)
        {
            int curr=vec[j];
            for(int l=0;l<4;l++)
            {
                if(((curr>>l)&1)==1)
                {
                    tempcnt[l]++;
                }
            }
        }
        for(j=0;j<4;j++)
        {
            if(tempcnt[j]>sz/2)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            // cout<<"i: "<<i<<endl;
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

