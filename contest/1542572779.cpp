#include <bits/stdc++.h>
using namespace std;
//#define DEBUG
#define INF 0x3f3f3f3f
#define INF16 16000000000000000LL
#define INF18 1000000000000000000LL
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define mod9 (int)(1e7 + 9)
#define mod7 (int)(1e7 + 7)
#define eps 1e-9
#define mse(x , y) memset(x , y , sizeof(x))
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
#define IOS do { ios::sync_with_stdio(0);cin.tie(0); } while (0)
typedef pair< int , int > pii;
typedef long long ll;

template < typename Iter >
ostream& _out(ostream& s , Iter a , Iter b){
    for(auto it = a; it != b; it++)
        s << (it == a ? "" : " ") << *it;
    return s;
}

template < typename A , typename B > 
ostream& operator << (ostream &s , pair< A , B > &p){ return s << "(" << p.F << " , " << p.S << ")"; }
template < typename T >
ostream& operator << (ostream &s , vector< T > &v){ return _out(s , ALL(v)); }



inline ll rit(){
    int key = 1;
    char c = getchar();
    while(!isdigit(c)){
        if(c == '-') key = -1;
        c = getchar();
    }

    ll x = 0;
    while(isdigit(c)){
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * key;
}

int __ = 1;

/*********default*********/

void init(){
}

void read(){
}

void solve(){
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

    int ok = 0, a = 0, b = 0;
    vector<string> box;
    for (int i = 0; i < n; i++) {
        string ss;
        cin >> ss;
        box.push_back(ss);
        if(ss == s) ok = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (box[i][1] == s[0] && box[j][0] == s[1]) ok = 1;
        }
    }

    if (ok) puts("YES");
    else puts("NO");
    return 0;
}





