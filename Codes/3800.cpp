#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int,pair<int,int> > iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long double ld;

typedef set<int>::iterator sit;
typedef map<int,int>::iterator mit;
typedef vector<int>::iterator vit;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 3;

#define _  %  MOD
#define __ %= MOD

#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.rbegin(), v.rend())
#define      fill(a)           memset(a, 0, sizeof (a))

#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      repA(i, a, n)     for(int i = a; i <= (n); ++i)
#define      repD(i, a, n)     for(int i = a; i >= (n); --i)
#define 	 pq(x)			   priority_queue<x,std::vector<x>,compare>
#define 	 rpq(x)			   priority_queue<x,std::vector<x>,Rcompare>
#define fi first
#define se second
#define mp make_pair
#define pb push_back

#define fbo find_by_order
#define ook order_of_key
struct Rcompare
{
  bool operator()(ii lhs,ii rhs){
    return lhs.fi>rhs.fi;
  }
};
struct compare
{
  bool operator()(ii lhs,ii rhs){
    return lhs.fi<rhs.fi;
  }
};
string in;
int n_a,n_b,n_c;
int p_a,p_b,p_c;
int a,b,c,n;
ll r,low,high,mid;
bool check(ll v){
    ll r_o = r;
    if(v*a > n_a){
        r_o -= (v*a - n_a)*p_a;
    }
    if(v*b > n_b){
        r_o -= (v*b - n_b)*p_b;
    }
    if(v*c > n_c){
        r_o -= (v*c - n_c)*p_c;
    }
    if(r_o>=0)return true;
    return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> in;
    cin >> n_a >> n_b >> n_c;
    cin >> p_a >> p_b >> p_c;
    cin >> r;
    n = in.length();
    rep(i,n){
        if(in.at(i) == 'B'){
            a++;
        }else if(in.at(i) == 'S'){
            b++;
        }else{
            c++;
        }
    }
    //cout << a << " " << b << " " << c << endl;
    high = r + 10000000000000;
    low = 0;
    mid = (high+low)/2;
    while(high-low > 1){
        if(check(mid)){
            low = mid;
        }else{
            high = mid;
        }
        mid = (high+low)/2;
        //cout << mid << endl;
    }
    cout << low;
	return 0;
}
