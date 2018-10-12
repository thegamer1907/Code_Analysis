#include <bits/stdc++.h>
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
 freopen("output.txt","w",stdout);
 */

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int mx = 2e5+100;
const int md = 1000000007;


bool compare(const int& a,const int& b) {
    return a < b;
}

int main() {
    int n,m,arr[1009] = {},a=0,b=0;
    scanf("%d %d",&n,&m);
    repi(0,n,1) {
        scd(arr[i]);
    }
    sort(arr,arr+n);
    b = arr[n-1]+m;
    repi(0,n-1,1) {
        if(arr[i] < arr[n-1]) {
            if(m >= arr[n-1]-arr[i]) {
                m -= arr[n-1]-arr[i];
                arr[i] += arr[n-1]-arr[i];
            }
            else {
                arr[i] += m;
                m = 0;
            }
        }
    }
    sort(arr,arr+n);
    if(m > 0) {
        if(m%n != 0) a = m/n+1;
        else a = m/n;
    }
    a += arr[n-1];
    cout << a << " " << b << endl;
}
