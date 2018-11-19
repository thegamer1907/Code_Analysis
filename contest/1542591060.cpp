//
// Author: Harsh_Vasoya, DA-IICT
//

#include <bits/stdc++.h>

#define sync_off std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define Hashmap unordered_map
#define Hashset unordered_set

#define all(v) v.begin(),v.end()
#define pb push_back

#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second

#define si(n)     scanf("%d",&n)
#define sii(n, m) scanf("%d%d",&n,&m)
#define slli(n)  scanf("%lld",&n)
#define forn(i, a, b) for(int i=a;i<b;i++)

const int mod = 10000009;
const lli MOD = 1000000007;
const int INF = INT_MAX;
int DEBUG = 0;

using namespace std;

int main() {
    sync_off

    string ref;
    cin>>ref;

    int n;
    cin>>n;

    vector<string> v;
    bool flag=false;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(ref.compare(s)==0)
            flag=true;
        v.pb(s);
    }

    if(flag){
        cout<<"YES";
        return 0;
    }

    bool flag1=false;
    bool flag2=false;
    forn(i,0,n)
        if(v[i][1]==ref[0])
            flag1=true;
    forn(i,0,n)
        if(v[i][0]==ref[1])
            flag2=true;
    if(flag1 && flag2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}


