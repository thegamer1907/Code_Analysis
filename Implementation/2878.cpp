#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
#define FOR(prom,a,b) for ( ll prom = (a); prom < (ll)(b); ++prom )
#define F(a) FOR(i,0,a)

int main() {
    ios::sync_with_stdio(false);
    char d;cin>>d;
    string s;getline(cin,s);
    s=s.substr(0,s.size()-1);
    set<char> res;
    for(int i=0; i<s.size(); i+=3){
        res.insert(s[i]);
    }
    cout<<res.size()<<endl;
    return 0;
}

