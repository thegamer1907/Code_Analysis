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

string s, b;
vector<int> c, d;
void solve()
{
    cin >> s;
    int n;
    cin >> n;
    rep(i,0,n){
        cin >> b;
        if(b == s) {
            cout << "YES" << endl;
            return;
        }
        if(b[0] == s[1]){
            c.push_back(i);
        }
        if(b[1] == s[0]){
            d.push_back(i);
        }
    }
    if(c.size() && d.size()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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