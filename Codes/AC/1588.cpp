#include <bits/stdc++.h>
using namespace std;
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define LL long long
#define rep1(i,a,b) for (int i = a;i <= b;i++)
#define rep2(i,a,b) for (int i = a;i >= b;i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ms(x,y) memset(x,y,sizeof x)
#define Open() freopen("F:\\rush.txt","r",stdin)
#define Close() ios::sync_with_stdio(0),cin.tie(0)

typedef pair<int,int> pii;
typedef pair<LL,LL> pll;

const int dx[9] = {0,1,-1,0,0,-1,-1,1,1};
const int dy[9] = {0,0,0,-1,1,-1,1,-1,1};
const double pi = acos(-1.0);
const int N = 1e5+100;

LL n,s,tans;
LL a[N],b[N];

bool ok(LL k){
    for (LL i = 1;i <= n;i++){
        b[i] = a[i]+i*k;
    }
    sort(b+1,b+1+n);
    LL temp = 0;
    rep1(i,1,k){
        temp+=b[i];
        if (temp>s) return false;
    }
    tans = temp;
    return true;
}

int main(){
    //Open();
    Close();//scanf,puts,printf not use
    //init??????
    cin >> n >> s;
    rep1(i,1,n){
        cin >> a[i];
    }
    int l = 0,r = n,ans = 0;
    while (l <= r){
        int mid = (l+r)>>1;
        if (ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else
            r = mid-1;
    }
    cout << ans <<' '<<tans<<endl;
    return 0;
}
