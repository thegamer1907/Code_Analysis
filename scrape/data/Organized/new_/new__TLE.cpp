#include<bits/stdc++.h>
#define debug(x) cout << "[" << #x <<": " << (x) <<"]"<< endl
#define pii pair<int,int>
#define clr(a,b) memset((a),b,sizeof(a))
#define rep(i,a,b) for(int i = a;i < b;i ++)
#define pb push_back
#define MP make_pair
#define LL long long
#define ull unsigned LL
#define ls i << 1
#define rs i << 1 + 1
#define INT(t) int t; scanf("%d",&t)

using namespace std;

LL n;
LL k;
int m;
const int maxn = 1e5 + 10;
LL p[maxn];

bool check(LL mid,int index,LL now){
    int pos = lower_bound(p + index,p + m + 1,now) - p;
    if(pos - index + 1 - (p[pos] > now) > 0)
        return true;
    return false;
}

int main() {
    while(cin >> n >> m >> k){
        for(int i = 1;i <= m;++ i)
            scanf("%lld",&p[i]);
        LL now = k;
        int ans = 0,index = 1;
        while(index <= m){
            int pos = lower_bound(p + index,p + m + 1,now) - p;
//            debug(pos);
            if(pos - index + 1 - (p[pos] > now) > 0){
                int ttttmp = pos - index + 1 - (p[pos] > now);
                now += ttttmp;
                index += ttttmp;
                ++ ans;
            }
            else {
//                LL l = 1,r = (LL)ceil(1.0 * (n - now)/ k);
//                LL b = r;
//                while(l <= r){
//                    LL mid = (l + r) >> 1;
//                    if(check(mid,index,now + mid * k)){
//                        b = min(b,mid);
//                        r = mid - 1;
//                    }
//                    else l = mid + 1;
//                }
//                now = now + b * k;
//                debug(b);
                now = now + (p[index] - now) / k * k;
            }
//            debug(now); debug(index);
        }
        printf("%d\n",ans);
    }
    return 0;
}