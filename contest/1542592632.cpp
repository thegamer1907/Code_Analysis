#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <set>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define mp(x,y) make_pair(x,y)
#define scd(n) scanf("%d",&n)
#define sclf(n) scanf("%lf",&n)
#define scl(n) scanf("%I64d",&n)
#define repi(a,b,c) for(int i=a;i<b;i+=c)
#define repis(a,b,c) for(int i=a-1;i>=b;i-=c)
#define repj(a,b,c) for(int j=a;j<b;j+=c)
#define repjs(a,b,c) for(int j=a-1;j>=b;j-=c)
#define repk(a,b,c) for(int k=a;k<b;k+=c)
#define repks(a,b,c) for(int k=a-1;k>=0;k-=c)
#define fi first
#define se second

/*
 fast I/O
 
 ios::sync_with_stdio(0);
 cin.tie();
 
 freeopen
 
 freopen("input.txt","r",stdin);
 freopen("output.txt,"w",stdout);
 */

typedef pair<ll,ll> ii;
const int mx = 100100;
const int md = 1e9+7;
const double EULER = 2.71828182845904523536;

double pitagoras(double x1,double y1,double x2,double y2) {return sqrt(pow(abs(x1-x2),2) + pow(abs(y1-y2),2));}

int main() {
    string x,y,z;
    int n,a=0,b=0;
    cin >> x;
    scd(n);
    repi(0,n,1) {
        cin >> y;
        z = y;
        reverse(z.begin(),z.end());
        if(x == y) {
            cout << "YES\n";
            return 0;
        }
        else if(x == z) {
            cout << "YES\n";
            return 0;
        }
        if(y[0] == x[1]) a = 1;
        if(y[1] == x[0]) b = 1;
    }
    if(a+b == 2) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}



