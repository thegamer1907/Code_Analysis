#include <iostream>
#include <sstream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <utility>
#include <string>
#include <cmath>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#define eps 1e-8

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int dir[9][2] = { 0, 1, 0, -1, 1, 0, -1, 0, 1, 1, 1, -1, -1, 1, -1, -1, 0, 0 };
const ll  ll_inf = 1e18;
const double pi=acos(-1.0);
const int inf = 0x3f3f3f;
const int mod = (int) 1e8 + 7;
const int Max = (int) 1e5+11;
stringstream ss;

/**********************************************Head-----Template****************************************/
bool Finish_read;
template<class T>inline void read(T &x){Finish_read=0;x=0;int f=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;if(ch==EOF)return;ch=getchar();}while(isdigit(ch))x=x*10+ch-'0',ch=getchar();x*=f;Finish_read=1;}
template<class T>inline void print(T x){if(x/10!=0)print(x/10);putchar(x%10+'0');}
template<class T>inline void writeln(T x){if(x<0)putchar('-');x=abs(x);print(x);putchar('\n');}
template<class T>inline void write(T x){if(x<0)putchar('-');x=abs(x);print(x);}
template<class T> T gcd(T a,T b){return b?gcd(b,a%b):a;}
template<class T> T lcm(T a,T b){return a/gcd(a,b)*b;}
/**********************************************Head-----Template*****************************************/

//
// tools:
// freopen("in.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// ios::sync_with_stdio(false);
//

ll n, s;
ll arr[Max];
priority_queue <ll , vector<ll>, greater <ll> > Q;

int main() {

    //freopen("in.txt", "r", stdin);

    scanf("%lld %lld",&n, &s);
    for (ll i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }

    if (n == 1) {
        if (arr[0] + 1 <= s) {
            printf("%lld %lld\n", 1ll, arr[0] + 1);
        }
        else {
            printf("0 0\n");
        }
        return 0;
    }

    ll pre = -1;
    ll ans = inf;
    ll temp;
    ll l = 0, r = n-1;
    while (l < r) {

        ll mid = l + ((r - l + 1) >> 1) ;
        //cout << mid <<endl;
        while (!Q.empty()) Q.pop();
        for (int i = 0; i < n; ++i) {
            ll temp = (mid+1)*(i+1) + (ll)arr[i];
            Q.push(temp);
        }

        ll cnt = 0;
        ll cost = 0;
        while (!Q.empty() && cnt < mid+1) {
            ll t = Q.top();
            Q.pop();
            //cout << mid +1<< " " << t << endl;
            if (cost + t <= s) {
                cost += t;
                cnt++;
            }
            else {
                break;
            }
        }

        //cout << cnt << " " << cost<<endl;
        if (cnt >= mid+1) {
            if (cnt == pre) ans = min(cost, ans);
            else ans = cost;
            l = mid;
            pre = cnt;

        } else {
            r = mid-1;
        }
    }
    if (pre == -1) {
        pre = ans = 0;
        while (!Q.empty()) Q.pop();
        for (int i = 0; i < n; ++i) {
            ll temp = (i+1) + (ll)arr[i];
            Q.push(temp);
        }

        if (Q.top() <= s) {
            pre = 1;
            ans = Q.top();
        }
    }
    printf("%lld %lld\n", pre, ans);
    return 0;
}
