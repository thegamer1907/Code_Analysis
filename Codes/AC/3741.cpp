#include <bits/stdc++.h>
using namespace std;
#define fixed thgrerde
#define f(i,f, t)  for(int i = f; i <  t; i++)
#define fr(i,f, t) for(int i = f; i >= t; i--)

typedef long long ll;
typedef pair<int,int> PII;

const int infint = INT_MAX;
const ll infll   = LLONG_MAX;
const int MAX = 4050;
int dp[MAX][MAX], arr[MAX];
int main()
{
    string str; cin >> str;
    ll f=0,s=0,t=0;
    for(int i = 0; i < str.length(); i++){
        f+=str[i]=='B';
        s+=str[i]=='S';
        t+=str[i]=='C';
    }
    ll hf, hs, ht; cin >> hf >> hs >> ht;
    ll cf, cs, ct; cin >> cf >> cs >> ct;
    ll rub; cin >> rub;
    ll l = 0, r = 1e13, mid;
    while(l+1<r){
        //cout << l << " " << r << " " << endl;
        mid = ( l + r ) / 2LL;
        ll curr = 0;
        curr = min(hf/(f == 0 ? 1 : f) , min(hs/(s == 0 ? 1 : s), ht/(t == 0 ? 1 : t)));
        ll copyf = hf, copys = hs, copyt = ht;
        copyf -= curr * f;
        copys -= curr * s;
        copyt -= curr * t;

        ll left = mid - curr;
        ll cost = 0;
        ll needf = max(0LL, left * f - copyf);
        ll needs = max(0LL, left * s - copys);
        ll needt = max(0LL, left * t - copyt);
        cost = needf * cf + needs * cs + needt * ct;
        //cout << mid  << " " << cost << " " << rub <<  endl;
        if(cost <= rub){
            l = mid;
        }else r = mid;
    }
    cout << l ;
    return 0;
}
