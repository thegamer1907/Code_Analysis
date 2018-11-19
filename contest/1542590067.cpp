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
    
    string orig;
    int x;
    cin>>orig;
    cin>>x;
    
    vector<string> d;
    for(int i=0;i<x;i++)
    {
        string temp;
        cin>>temp;
        d.pb(temp);
    }
    
    int k = 0, o = 0;
    for(int i=0;i<x;i++)
    {
        if(d[i] == orig)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            if (d[i][0] == orig[1]) {
                k = 1;
            }
            if (d[i][1] == orig[0]) {
                o = 1;
            }
        }
    }
    
    if(k && o)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
