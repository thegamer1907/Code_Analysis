#include<bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<ll> vi;
const ll Mod = 7 + 1e9;
const ll MAX = 5 + 1e5;
double H,M,S,t1,t2;
bool check(double a,double b)
{
    return abs(a-b)>0.01;
}
int main()
{
    cin >> H >> M >> S >> t1 >> t2;
    M = floor(M / 5);
    if(S > 0)
        M+=0.5;
    if(M > 0)
        H += 0.5;
    if( S - floor(S/5)*5 == 0 )
    S = floor(S / 5) ;
    else S = floor(S/5) + 0.5;
    if(H<1) H+=12;
    if(M<1) M+=12;
    if(S<1) S+=12;
    double cur = t1;
    while( check(cur,H) && check(cur,M) && check(cur,S) && check(cur,t2) )
    {
        cur += 0.5;
        if(cur > 12.5)
            cur -= 12;
    }
    if( !check(cur,t2) )
    {
        cout << "YES\n"; return 0;
    }
    cur = t1;
    while( check(cur,H) && check(cur,M) && check(cur,S) && check(cur,t2) )
    {
        cur -= 0.5;
        if(cur < 1)
            cur += 12;
    }
    if(cur == t2)
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
