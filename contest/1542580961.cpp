#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including seg_tree_order_statistics_node_update
#include <stdio.h>
#include <cassert>
using namespace std;
//using namespace __gnu_pbds;
typedef int lo;
typedef pair<lo,lo> ll;//pair
typedef vector<lo> vl;  //vector of long
typedef vector<ll > vll;   //vector of pair
typedef priority_queue<lo>p_q;
typedef vector< vl > vvl;  //vector of vectors
#define X first
#define Y second
#define mp(a,b) make_pair((a),(b))
#define REP(a,b) for(lo i=(a);i<(lo)b;i++)//no need to declare variable i
#define REPE(a,b,c,d) REP(a,b)for(lo j=(c);j<(lo)d;j++)//no need to declare vaiables i,j
#define REPV(a,b,c) for(lo(a)=b;(a)<(c);(a)++)//a is the variable
#define IREP(a,b) for(lo i=(a);i>=(b);i--)
#define IREPV(a,b,c) for(lo(a)=b;(a)>=(c);(a)--)
#define all(v) (v).begin(),(v).end()
#define TRV(a) for(auto it : a)
#define INF 101000
#define MOD 1000000007
#define M 1000000007
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define pb(a) push_back((a))
#define endl "\n"
#define eps 1e-9
#define PI 3.141592653589793
template<typename T> ostream& operator<< ( ostream &o,vector<T> v ) {
    if ( v.size() >0 )o<<v[0];
    for ( unsigned   i=1; i<v.size(); i++ )o<<" "<<v[i];
    return o<<endl;
}
template<typename U,typename V> ostream& operator<< ( ostream &o,pair<U,V> p ) {
    return o<<"("<<p.first<<", "<<p.second<<") ";
}
template<typename T> istream& operator>> ( istream &in,vector<T> &v ) {
    for ( unsigned   i=0; i<v.size(); i++ )in>>v[i];
    return in;
}
template<typename T> istream& operator>> ( istream &in,pair <T,T> &p ) {
    in>>p.X;
    in>>p.Y;
    return in;
}
int main(){
    std::ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);cout.precision(20);
    lo n,k;
    cin>>n>>k;
    vl cnt(16,0);
    REP(0,n){
        lo x=0;
        REP(0,k){
            lo y;
            cin>>y;
            x*=2;
            x+=y;
        }
        cnt[x]=1;
    }
    REP(1,(1<<16)){
        vl ans(4,0);
        lo cont=0;
        bool valid=true;
        REPV(j,0,16){
            if(i&(1<<j)){
                lo x=j;
                if(cnt[j]==0)valid=false;
                REPV(k,0,4)if(j&(1<<k))ans[k]++;
                cont++;
            }
        }
        cont/=2;
        if(valid){
            bool res=true;
            REPV(j,0,4)if(ans[j]>cont)res=false;
            if(res){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
	return 0;
}
