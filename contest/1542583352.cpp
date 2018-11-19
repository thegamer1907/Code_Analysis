#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
#include <math.h>

#define num 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define traverse(container, it) \
for(typeof(container.begin()) it = container.begin(); it!= container.end(); it++)
using namespace std;

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);

int gcd(int a, int b){ if(b==0) return a; return gcd(b,a%b); }
int lcm(int a, int b) {return a*(b/gcd(a,b));}

ll powi(ll base,ll exp,ll m)
{
    ll res=1;
    while(exp)
    {
        if(exp%2)
        {
            res*=base;
            res%=m;
        }
        base*=base;
        base%=m;
        exp>>=1;
    }
    return res%m;
}

int main(int argc, const char * argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)
    {
        h=0;
    }
    
    // check h hand
    pair<int, int> a[6];
    a[0] = {t1*30*60*12,0};
    a[1] = {t2*30*60*12,1};
    a[2] = {(60*30*12*h)+(30*12*m)+(s), 2};
    a[3] = {(60*6*12*m)+(12*s), 3};
    a[4] = {(6*60*12*s), 4};
    
    sort(a, a+5);
    
    int pos0, pos1;
    
    for(int i=0;i<5;i++)
    {
        if(a[i].second == 0)
        {
            pos0 = i;
        }
        else if(a[i].second == 1)
        {
            pos1 = i;
        }
    }
    
    if(pos0 == pos1+1 || pos0+1 == pos1 || (pos0==0 && pos1==4) || (pos0==4 && pos1==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
