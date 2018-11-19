#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
#define ll long long
#define pb(k) push_back(k)
#define mp(k,d) make_pair(k,d)
#define ts(k) to_string(k)
#define pii pair<int,int>
#define F first
#define S second
#define INF 1000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    t1*=50;
    t2*=50;
    h*=50;
    m*=10;
    s*=10;
    if(m!=0 || s!=0){
        h+=5;
    }
    if(s!=0){
        m+=5;
    }
    vector<int>f;
    vector<int>t;
    t.pb(t1); t.pb(t2);
    sort(t.begin(),t.end());
    f.pb(h); f.pb(m); f.pb(s); f.pb(t1); f.pb(t2);
    sort(f.begin(),f.end());
    for(int i=0;i<4;i++){
        if(f[i]==t[0] && f[i+1]==t[1]){
            cout<<"YES";
            return 0;
        }
    }
    if(f[0]==t[0] && f[4]==t[1]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}