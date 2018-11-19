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

typedef pair<ll,ll> ii;
const int mx = 200100;
const int md = 1000000007;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}

int main() {
    map <string,bool> ada;
    int n,k,ans[5] = {},arr[5];
    vector <string> ars;
    scanf("%d %d",&n,&k);
    repi(0,n,1) {
        int cnt = 0;
        string a="",b="";
        repj(0,k,1) {
            scd(arr[j]);
            a += char(arr[j]+'0');
            b += char((arr[j]+1)%2+'0');
            cnt += arr[j];
        }
        ars.pb(a);
        ada[a] = true;
        if(cnt == 0 || ada[b]) {
            printf("YES\n");
            return 0;
        }
        else if(cnt == 1) {
            repj(0,k,1) {
                if(arr[j]) ans[j] = 1;
            }
        }

    }
    repi(0,ars.size(),1) {
        repj(0,k,1) {
            if(ars[i][j] == '0' and ans[j]) {
                printf("YES\n");
                return 0;
            }
        }
    }
    int cnt = 0;
    repi(0,k,1) cnt += ans[i];
    if(cnt > 1) {
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
}
