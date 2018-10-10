#include <bits/stdc++.h>

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

const ll NN=111111;
const ll ML=2147483647;
const ll MLL=9223372036854775807;
const ld pi=acos(-1);

ll n,i,k,j,f,l,r,z,q,e,d,w,c,ii,X,Y,a[NN];
ld res,x,m,y; string s,S; map<string,string> M;

template<typename T> void stop(T s) { cout << s << endl; exit(0); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> k; i=1; for(;;)
    {
        j=i; f=0; while(j)
        {
            f+=(j%10);
            j/=10;
        }
        if(f==10)k--;
        if(!k)stop(i);
        i++;
    }
    return 0;
}
