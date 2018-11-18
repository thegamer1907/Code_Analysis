#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
#include <cstdio>
#include <iomanip>
#include <iterator>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <sstream>

#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
#define endl "\n"
#define sqr(x) (x)*(x)
#define rust(a,b,c,d) sqrt(sqr(a-c)+sqr(b-d))

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> para;
typedef pair<para,ll> triple;

const ll NN=111111;
const ll ML=2147483647;
const ll MLL=9223372036854775807;
const ld pi=acos(-1);

ll n,m,i,k,j,f,l,r,z,res,q,e,d,w,c,ii,x,y,X,Y,i1,i2,i3,i4,a[NN],v1,v2,v3,vm;
string S,s[NN],t;

template<typename T> void stop(T s) { cout << s << endl; exit(0); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> S; cin >> n; for(i=1; i<=n; i++)cin >> s[i];
    for(i=1; i<=n; i++)for(j=1; j<=n; j++)
    {
        t=s[i]+s[j]; if(t.find(S)<t.size())stop("YES");
    }
    stop("NO"); return 0;
}
