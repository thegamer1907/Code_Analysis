#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <vector>
#include <stack>
#include <algorithm>
#include <bitset>
#include <set>
#include <ctime>
#include <iomanip>
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(i,a,n) for(int i=a; i<n; i++)
#define rep1(i,a,n) for(int i=n-1; i>=a; i--)
#define sd(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define test(a) cout<<a<<endl
#define test2(a,b) cout<<a<<" "<<b<<endl
#define IOS ios::sync_with_stdio(false);cin.tie(0)
using namespace std;
typedef  long long ll;
const int MAX = 1e5+10;
const int N = 1e5+10;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll mod = 1e9+7;
const double pi=3.1415926535898;
const double eps=1e-9;
const int MAXN = 1e5+10;


void solve()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
//    h %= 12;
    h = h*3600 + m*60 + s;
    m = m*720 + s*12;
    s = s*720;
    h %= 12*3600;
    t1%=12;
    t2%=12;
    t1 *= 3600;
    t2 *= 3600;
    if(t1 > t2) swap(t1, t2);
//    cout << h << ' ' << m << ' ' << s << ' ' << t1 << ' ' << t2 <<endl;
    if(h > t1 && h < t2 && m > t1 && m < t2 && s > t1 && s < t2){
        cout << "YES" << endl;
        return;
    }
    else if( (h < t1 || h > t2) && (m < t1 || m > t2) && (s < t1 || s > t2)){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}




//#define local
int main()
{
#ifdef local
    freopen("in","r",stdin);
#endif
//    IOS;
    //    freopen("ascii.in","r",stdin);
    //    freopen("ascii.out","w",stdout);
    //    int casen = 1;
    //init();
//        int t;
//        sd(t);
//        while(t--){
    //        printf("Case #%d: ", casen++);
    solve();
//        }

    //    fclose(stdout);
    //    fclose(stdin);
    return 0;
}