#pragma gcc optimize("Ofast")

#include "bits/stdc++.h"
using namespace std;
typedef int64_t lld;
typedef pair<int,int> pii;
typedef pair<lld,lld> pll;
typedef pair<int,pll> pip;
typedef pair<pll,int> ppi;
typedef pair<lld,pll> plp;
typedef pair<pll,lld> ppl;
typedef pair<pll,pll> ppp;
template<typename T>
using maxHeap = priority_queue<T,vector<T>,less<T> >;
template<typename T>
using minHeap = priority_queue<T,vector<T>,greater<T> >;
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define jizz cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
inline void input(int &_x){
        _x = 0;
        int _tmp = 1; char _tc = getchar();
        while((_tc < '0' || _tc > '9') && _tc != '-') _tc = getchar();
        if(_tc == '-') _tc = getchar(), _tmp = -1;
        while(_tc >= '0' && _tc <= '9') _x = _x*10+(_tc-48), _tc = getchar();
        _x *= _tmp;
}
inline void output(int _x)
{
        char _buff[20]; int _f = 0;
        if(_x == 0) putchar('0');
        while(_x > 0)
        {
                _buff[_f++] = _x%10+'0';
                _x /= 10;
        }
        for(_f-=1; _f >= 0; _f--)
                putchar(_buff[_f]);
        putchar(endl);
}
template<typename Iter>
ostream& _out(ostream &s, Iter b, Iter e) {
        s<<"[";
        for ( auto it=b; it!=e; it++ ) s<<(it==b ? "" : " ")<<*it;
        s<<"]";
        return s;
}
template<class T1,class T2>
ostream& operator<<(ostream& out, pair<T1,T2> p){
        return out << '(' << p.first << ", " << p.second << ')';
}
template<typename T>
ostream& operator <<( ostream &s, const vector<T> &c ) {
        return _out(s,c.begin(),c.end());
}
#ifdef erd1
    #define pprint(x) cerr<<__PRETTY_FUNCTION__<<":"<<__LINE__<<" - "<<(#x)<<"="<<(x)<<endl
#else
    #define pprint(x)
#endif

// code starts here

signed main(){
        int n,ans = 0;
        cin >> n;
        while(n--) {
                string s;
                cin >> s;
                switch (s[0])
                {
                case 'T':
                        ans+=4;
                        break;
                case 'C':
                        ans+=6;
                        break;
                case 'O':
                        ans+=8;
                        break;
                case 'D':
                        ans+=12;
                        break;
                case 'I':
                        ans+=20;
                        break;
                }
        }
        cout << ans << endl;
}
