/*
ID: computerbox --> Huseyn Hajiyev
LANG: C++
TASK: target_mode_on
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#define _CRT_SECURE_NO_WARNINGS
//#include <boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
#define FAST_READ ios_base::sync_with_stdio(0);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define ll long long
#define debt(x,y)cout<<"#x = "<<(x)<<" and "<<"#y = "<<(y)<<endl;
#define deb(x)cout<<"#x = "<<(x)<<endl;
#define COUT(n, a) cout<< fixed << setprecision(a) << n<<endl
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define arr(a,n) for(ll i=1;i<=n;i++) cout<<a[i]<<" "; cout << "\n";
#define vecc(a,n) for(ll i=0;i<n;i++) cout<<a[i]<<" "; cout << "\n";
#define CURTIME() cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl
#define DTIME(ccc) __begin = clock(); ccc; cerr<<"Time of work = "<<(clock()-__begin)/CLOCKS_PER_SEC<<endl;
#define MAXN 2000
//cin.ignore (7777, '\n');

using namespace std;
using namespace __gnu_pbds;

#define debug(args...)(Debugger()) , args
class Debugger
{
  public:
  Debugger(const std::string& _separator=", ") :
  first(true),separator(_separator){}
  template<typename ObjectType>
  Debugger& operator,(const ObjectType& v)
  {
        if(!first)cerr<<separator;
        cerr<<v;
        first=false;
        return *this;
  }
  ~Debugger() {cerr<<endl;}      
  private:
    bool first;
    string separator;
};
 
template <typename T1, typename T2>
inline ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p)
{
   return os<<"("<<p.first<<", "<<p.second<<")";
}
template<typename T>
inline ostream &operator<<(ostream & os,const vector<T>& v)
{
    bool first=true;
    os<<"[";
    for(unsigned ll i=0;i<v.size();i++)
    {
        if(!first)os<<", ";
        os<<v[i];
        first=false;
    }
        return os<<"]";
}
template<typename T>
inline ostream &operator<<(ostream & os,const set<T>&v)
{
    bool first=true;
    os<<"[";
    for(typename set<T>::const_iterator ii=v.begin();ii!=v.end();++ii)
    {
        if(!first)os<<", ";
        os<<*ii;
        first=false;
    }
    return os<<"]";
}
template<typename T1, typename T2>
inline ostream &operator<<(ostream & os,const map<T1, T2>&v)
{
        bool first=true;
        os<<"[";
        for(typename map<T1,T2>::const_iterator ii=v.begin(); ii!=v.end();++ii)
        {
            if(!first)os<<", ";
            os<<*ii;
            first=false;
        }
        return os<<"]";
}

ll  n,k,p;
ll cnt=0;
ll massiv[100010];
int main(){
FAST_READ;
cin>>n>>k>>p;
for(ll i=1;i<=k;i++)cin>>massiv[i];
ll ind=1;
ll pg=p;
ll res=0;
while(ind<=k)
{
  ll cnt=0;
  while(ind<=k && massiv[ind]<=pg)
  {
	cnt++;
	ind++;
  }
  if(cnt)
  {
	res++;
	pg+=cnt;
  }
  else pg+=p;
  
}
cout<<res<<endl;




return 0;
}