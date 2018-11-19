#include <bits/stdc++.h>
using namespace std;

#define FOR(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define pb emplace_back
#define all(x) x.begin(), x.end()
#define argmax(a)    (max_element(all(a)) - (a).begin())
#define argmin(a)    (min_element(all(a)) - (a).begin())
#define dbg(args...)  {err(split(#args,',').begin(),args);}

#define tthti  template<typename Head, typename... Tail> inline
#define ttt12i template<typename T1, typename T2> inline
#define ttti   template<typename T> inline

inline void wr2(){cout<<"\n";}
inline void wr() {cout<<"\n";}
inline void rd()  {}
ttti void read(T &a);
ttti void priws(T a);
ttti void print(T a);

void err(vector<string>::iterator it){++it;}
tthti void rd (Head& head,Tail&... tail){read(head); rd  (tail...);}
tthti void wr2(Head head, Tail... tail){print(head);wr2(tail...);}
tthti void wr(Head head, Tail... tail){priws(head);wr2(tail...);}
ttti  void wr_range(T f,T s){priws(*f);for(auto i=++f;i!=s;++i)print(*i);}
tthti void err(vector<string>::iterator it,Head head,Tail...tail){wr((*it).substr((*it)[0]==' ',INT_MAX),"=",head);err(++it, tail...);}
vector<string>split(const string&s,char c){vector<string>v;stringstream ss(s);string x;while(getline(ss,x,c))v.pb(x);return move(v);}
#define a _a
#define n _n
ttt12i istream&operator>>(istream&is,pair<T1,T2>&a){return is>>a.first>>a.second;}
ttt12i ostream&operator<<(ostream&os,pair<T1,T2>&a){return os<<a.first<<" "<<a.second;}
ttti   ostream&operator<<(ostream&os,vector<T>&a){os<<a[0];for(int i=1;i<a.size();++i)os<<"\n "[is_fundamental<T>::value]<<a[i];return os;}
ttti   istream&operator>>(istream&is,vector<T>&a){if(a.size()==0){int n;is>>n;a.resize(n);}for(int i=0;i<a.size();++i)is>>a[i];return is;}
ttti void print(T a){cout<<" "<<a;}
ttti void priws(T a){cout<<a;}
ttti void read(T& a){cin>>a;}

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;

/*----------------------------------------------------------------------------------------------------*/
string p;
int n;
vector<string> vs;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    rd(p, n); vs.resize(n); rd(vs);
    bool ans, sc, ft;
    ans=sc=ft=false;
    FOR(i, 0, n){
        if(vs[i][0]==p[0] && vs[i][1]==p[1]){
            ans=true;
            break;
        }
        ft=ft || vs[i][1]==p[0];
        sc=sc || vs[i][0]==p[1];
        ans=ft&&sc;
        if(ans) break;
    }
    if(ans) wr("YES");
    else wr("NO");
}