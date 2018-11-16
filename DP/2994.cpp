//http://codeforces.com/contest/1037/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#ifdef BTK
#define DEBUG if(1)
#else
#define CIN_ONLY if(1)
struct cww {cww() {CIN_ONLY{ios::sync_with_stdio(false); cin.tie(0);}}}star;
#define DEBUG if(0)
#endif
#define ALL(v) (v).begin(),(v).end()
#define REC(ret, ...) std::function<ret (__VA_ARGS__)>
template <typename T>inline bool chmin(T &l, T r){bool a = l>r; if (a)l = r; return a;}
template <typename T>inline bool chmax(T &l, T r){bool a = l<r; if (a)l = r; return a;}
template <typename T>istream& operator>>(istream &is, vector<T> &v){for (auto &it : v)is >> it;return is;}
class range {private: struct I { int x; int operator*() { return x; }bool operator!=(I& lhs) { return x<lhs.x; }void operator++() { ++x; } }; I i, n;public:range(int n) :i({ 0 }), n({ n }) {}range(int i, int n) :i({ i }), n({ n }) {}I& begin() { return i; }I& end() { return n; }};


int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int ret = 0;
    for(int i:range(1,n)){
        if(abs(s[i]-t[i])==1&&abs(s[i-1]-t[i-1])==1&&s[i]!=s[i-1]){
            ret++;
            s[i]=t[i];
            s[i-1]=t[i-1];
        }
    }
    for(int i:range(n)){
        if(s[i]!=t[i])ret++;
    }
    cout<<ret<<endl;
    return 0;
}