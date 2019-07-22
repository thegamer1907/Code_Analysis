#include <bits/stdc++.h>�

using namespace std;

#define ops cout<<"ops"<<endl;
#define freopens freopen("cowpatibility.in", "r", stdin);freopen("cowpatibility.out", "w", stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coutendl cout<<endl;

#define DIM 100007
#define DIMM 200007
#define INF 1000000000007.0
#define X 100007
#define eps 0.000000001
#define PI 3.14159265358979323846
#define MAX 1000000000
#define MODULO (long long)998244353

const long double gr=(1+sqrt(5))/2;
typedef int I;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<I,I> pII;
typedef pair<ll,ll> pllll;
typedef pair<ld,ld> pldld;
typedef vector<I> vI;
typedef vector<ll> vll;
typedef vector<pllll> vpllll;
typedef char cr;
typedef string str;

ll n,m,k;
ll val,p,c,res;

int main()
{
    //freopens;
    fast;

    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
     cin>>val;
     if(val>p){
      res++;

      p+=c;
      while(p<val)
       p+=k;

      c=0;
     }
     c++;
     //cout<<p<<' '<<res<<endl;
    }
    cout<<res<<endl;
    return 0;
}