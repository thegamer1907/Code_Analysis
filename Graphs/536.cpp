#include<bits/stdc++.h>
using namespace std;
/*
#include<boost/multiprecision/cpp_int.hpp>
namespace mp=boost::multiprecision;
using namespace mp;*/
//cpp_int

#define mem(A) memset(A,0,sizeof(A))
#define loop(i,a,n) for(long long i=a;i<n;i++)
#define pb push_back
#define mkp make_pair
#define prq priority_queue
#define fir first
#define sec second
#define all(A) A.begin(),A.end()
#define mod 1000000007
#define take(t) ll t;cin>>t;while(t--)
#define en "\n"

typedef long long ll;
typedef pair<ll,ll> pll;

int main()
{   //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
ll n,t;
    cin>>n>>t;
    char s[n];
    cin>>s;
    loop(i,0,t)
    {
        loop(j,0,n-1)
        {
            if(s[j]=='B' && s[j+1]=='G')
                swap(s[j],s[j+1]),j++;
        }
    }
    cout<<s;
}
