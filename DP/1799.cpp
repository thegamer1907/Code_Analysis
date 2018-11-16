#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;

#define fr first
#define sc second
#define memset(X,Y) memset(X,Y,sizeof X)
#define all(X) X.begin(),X.end()
#define SZ size()
#define mp make_pair
#define pb push_back
#define Pb pop_back

template<class A, class B> ostream& operator <<(ostream &out, const pair<A, B> &p) {
    return out << "(" << p.fr << ", " << p.sc << ")";
};

template<class A> ostream& operator <<(ostream &out, const vector<A> &v) {
    out << "[";
    for(int i=0;i<(int)v.SZ;i++) {
        if(i)
            out << ", ";
        out << v[i];
    }
    return out << "]";
}

#define error(args...){vector<string> _v = split(#args,','); err(_v.begin(),args); cerr<<endl;}
vector <string> split(const string &s,char c)
{
    vector<string> v;
    stringstream ss(s);
    string x;
    while(getline(ss,x,c))
        v.emplace_back(x);
    return move(v);
}
void err(vector<string>:: iterator it) {}
template<typename T,typename ... Args>
void err(vector<string>::iterator it, T a, Args ... args)
{
    cerr << it->substr((*it)[0] == ' ',it->length())
         << " = " << a <<" " ;
    err(++it,args...);
}

template <typename T>
using order_set = tree<T, null_type, less<T>, rb_tree_tag,
      tree_order_statistics_node_update>;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
double pi = acos(-1),eps=1e-8;
const ll N = (1e5) + 10 , M = (1e6)+10 , mod = 1e9 + 7 , K = 4 * N;
ll OOL = 1e18;
ll OO = 1e9;

int main(){
    string s;
    cin >> s;
    vi f1,f2;
    for(int i=0;i+1<s.SZ;i++){
        if(s[i]=='A' && s[i+1]=='B')f1.pb(i);
        if(s[i]=='B' && s[i+1]=='A')f2.pb(i);
    }
    if(f1.SZ==0 || f2.SZ==0)return cout << "NO",0;
    for(int x:f1){
        if(f2.back()!=x+1 && f2.back()+1 !=x)return cout <<"YES",0;
        if(f2[0]!=x+1 && f2[0]+1 !=x)return cout <<"YES",0;
    }
    cout << "NO";
}
/*

*/
