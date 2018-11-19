#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <bitset>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <cassert>
#include <ctime>
#define rep(i,m,n) for(i=m;i<=(int)n;i++)
#define inf 0x3f3f3f3f
#define mod 1000000007
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pi acos(-1.0)
#define pii pair<int,int>
#define sys system("pause")
#define ls (rt<<1)
#define rs (rt<<1|1)
#define all(x) x.begin(),x.end()
const int maxn=2e2+10;
const int N=5e4+10;
using namespace std;
ll gcd(ll p,ll q){return q==0?p:gcd(q,p%q);}
ll qmul(ll p,ll q,ll mo){ll f=0;while(q){if(q&1)f=(f+p)%mo;p=(p+p)%mo;q>>=1;}return f;}
ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p;p=p*p;q>>=1;}return f;}
int n,m,k,t,len[18];
struct node
{
    string pre,suf;
    int len;
    bitset<(1<<18)>dp;
}a[maxn];
int main(){
    int i,j;
    rep(i,2,17)len[i]=len[i-1]+(1<<i-1);
    scanf("%d",&n);
    rep(i,1,n)
    {
        string tmp;
        cin>>tmp;
        a[i].len=tmp.size();
        for(j=0;j<tmp.size();j++)
        {
            int mask=0;
            for(k=j;k<j+17&&k<tmp.size();k++)
            {
                mask=((mask<<1)|(tmp[k]-'0'));
                a[i].dp[mask+len[k-j+1]]=1;
            }
        }
        if(a[i].len>17)
        {
            a[i].pre=tmp.substr(0,17);
            a[i].suf=tmp.substr(tmp.size()-17);
            a[i].len=17;
        }
        else a[i].pre=a[i].suf=tmp;
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        ++n;
        int x,y;
        scanf("%d%d",&x,&y);
        a[n].dp=(a[x].dp|a[y].dp);
        a[n].len=a[x].len+a[y].len;
        string tmp=a[x].suf+a[y].pre;
        for(j=0;j<tmp.size();j++)
        {
            int mask=0;
            for(k=j;k<j+17&&k<tmp.size();k++)
            {
                mask=((mask<<1)|(tmp[k]-'0'));
                a[n].dp[mask+len[k-j+1]]=1;
            }
        }
        if(a[n].len>17)
        {
            if(a[x].len>=17)a[n].pre=a[x].pre;
            else a[n].pre=tmp.substr(0,17);
            if(a[y].len>=17)a[n].suf=a[y].suf;
            else a[n].suf=tmp.substr(tmp.size()-17);
            a[n].len=17;
        }
        else a[n].pre=a[n].suf=tmp;
        int ret=0;
        for(i=17;i>=1;i--)
        {
            bool flag=true;
            for(j=len[i];j<len[i]+(1<<i);j++)
            {
                flag&=a[n].dp[j];
                if(!flag)break;
            }
            if(flag)
            {
                ret=i;
                break;
            }
        }
        printf("%d\n",ret);
    }
    return 0;
}
