#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>

#define endl "\n"
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b)
#define pf printf
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define all(c) c.begin(),c.end()
#define ms(a,c) memset(a,c,sizeof(a))
#define tr(c,i) for(decltype((c).begin()) i=(c).begin();i!=(c).end();i++)
#define trr(c,i) for(decltype((c).rbegin()) i=(c).rbegin();i!=(c).rend();i++)

using namespace std;

#define N 100001
#define mod 1000000007
#define inf 1e9

typedef long long ll;
typedef unsigned long long ull;

int k;
bool flag[16];
vi v;
vi temp;

bool solve()
{
    if(temp.empty())
        return false;
    int cnt[k]={0};
    tr(temp,it)
    {
        for(int i=0;i<k;i++)
        {
            if(*it&(1<<i))
                cnt[i]++;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(cnt[i]>temp.size()/2)
            return false;
    }
    return true;
}

bool func(int idx)
{
    if(idx==v.size())
        return solve();
    bool ans=false;
    temp.push_back(v[idx]);
    ans|=func(idx+1);
    temp.pop_back();
    if(ans)
        return ans;
    ans|=func(idx+1);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("Input.txt","r",stdin);
//    freopen("Output.txt","w",stdout);
    int n;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int mask=0;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            if(a)
                mask|=1<<j;
        }
        if(flag[mask])
            continue;
        v.push_back(mask);
        flag[mask]=true;
    }
    if(func(0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
