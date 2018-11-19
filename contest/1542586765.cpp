#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define endl "\n"
#define y1 sdjkbnsdfdjkvn
#define pb push_back
#define pf push_front
#define ff first
#define ss second

const int INF=(unsigned int)(-1)/2;
const ll INFL=(unsigned ll)(-1)/2;
const ld pi=3.1415926535897932384626433832795;

ld h,m,s,t1,t2;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> h >> m >> s >> t1 >> t2;
    ld m1 = m/5;
    ld s1 = s/5;
    if(t1 > t2)
        swap(t1, t2);
    if( (h>=t1 && t2>h) && (m1>=t1 && t2>m1) && (s1>=t1 && t2>s1) )
        return cout << "YES", 0;
    if( !(h>=t1 && t2>h) && !(m1>=t1 && t2>m1) && !(s1>=t1 && t2>s1) )
        return cout << "YES", 0;
    return cout << "NO", 0;
}
