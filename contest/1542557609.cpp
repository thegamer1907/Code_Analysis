#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <cstdlib>
#include <complex>
#include <vector>

using namespace std;

typedef long long lol;
typedef long long ll;
typedef pair<lol, lol> pll;
typedef long double lod;

const lol N=2000000;
const lol M=100000;
const lol md=(1e16);
const lol mx=(1e18);
const lol mn=(1e16);

#define F first
#define S second
#define y1 yyyy1
#define sqr(a) (a)*(a)

lol n,m,k,l,w,j,i;
string s,ss[N];

int main()
{
    //freopen("in.in","r",stdin);
    //freopen("main.out","w",stdout);

    getline(cin,s);
    cin>>n;
    getline(cin,ss[0]);
    for (i=1;i<=n;i++)
    {
        getline(cin,ss[i]);
        if (ss[i]==s) { cout<<"YES"; return 0; }
    }
    for (i=1;i<=n;i++) if (ss[i][1]==s[0]) { k++; l=i; }
    for (i=1;i<=n;i++) if (ss[i][0]==s[1] && k) { cout<<"YES"; return 0; }
    cout<<"NO";
}
