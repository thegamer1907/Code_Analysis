///        +====================+
///        "In The Name Of Allah"
///    +----+------------------+----+
///    |2017| Ali Mollahoseini |1396|
///    | 10 +------------------+ 07 |
///    | 05 |   CF Round 438   | 13 |
///    +----+------------------+----+


#include <bits/stdc++.h>
#define ll long long
#define int long long
#define F first
#define S second
#define pb push_back
#define Init ios::sync_with_stdio(0);

const int MX = 70000 + 100;
const int inf = 0x7FFFFFFF;
const int mod = 1000 * 1000 * 1000 + 7;
using namespace std;
int n;
map<char,bool>f;
map<char,bool>sec;

int32_t main(){
    Init
    string s;
    cin>>s;
    cin>>n;
    for(int i=0;i<n;++i){
        string tmp;
        cin>>tmp;
        if(tmp == s){
            cout<<"YES"<<endl;
            return 0;
        }
        f[tmp[0]]=1;
        sec[tmp[1]]=1;
    }
    if((f[s[1]]&&sec[s[0]]) ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

