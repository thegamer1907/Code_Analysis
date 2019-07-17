#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;




int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  ll n,m,k;
  cin>>n>>m>>k;
  vec q(m);
  f(i,0,m)
  {
    cin>>q[i];
  }
  
  ldb val=1.0*q[0]/k;
  ll qq=q[0];
  ll c1=0,page=0,c=0,f=0,f1=0;
  f(i,0,m)
  {
    ldb kk=((1.0*q[i]-c1)/k);
    if((q[i]-c1)-(qq)<=k&&kk<=ceil(val))
    {
        c++;
        if(i==m-1)
            page++;
         
    }
    else
    {

           

        ++page;
        c1+=c;
        c=0;
        val=1.0*(q[i]-c1)/k;
        qq=q[i]-c1;
         // cout<<q[i]<<" "<<kk<<" "<<page<<" "<<ceil(val)<<" "<<c1<<edl; 
         i--; 
    

    }
    
    
  }
  cout<<page;


  


  


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}