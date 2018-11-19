#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pp pair<ll,ll>
#define stime  clock_t start=clock();double duration;
#define etime duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;cout<<duration<<endl;
#define MOD 1000000007
#define rep1(v) for(auto&it:(v))
#define rep2(a) for(auto&ptr:(a))
#define dbg cout<<"hello\n";


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int n;
    cin>>n;
    string p;
    vector<string>v,t,f;
    bool ans=0;
    for(int i=1;i<=n;i++){
        cin>>p;
        v.push_back(p);
        if(p==s)ans=1;
    }

    if(ans){
        cout<<"YES";
        return 0;
    }
    bool x=0,y=0;
    for(int i=0;i<v.size();i++){
        if(v[i][1]==s[0])x=1;
        if(v[i][0]==s[1])y=1;
    }
    if(x && y)cout<<"YES";
    else cout<<"NO";
    return 0;

}
