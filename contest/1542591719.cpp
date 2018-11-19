#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define pb push_back
using namespace std;
ll power(ll a,ll b,ll c){
    ll ret=1;
    while(b){
        if(b%2==1)
            ret=(ret*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    int n,flag=0;
    cin>>n;
    string r[n+3];
    map<string,int>m;
    m[s]=1;
    for(int i=0;i<n;i++){
        cin>>r[i];
        if(m[r[i]]==1){
            flag=1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string tmp,tmp1;
            tmp.pb(r[i][1]);
            tmp.pb(r[j][0]);
            tmp1.pb(r[j][1]);
            tmp1.pb(r[i][0]);
            //cout<<tmp<<" "<<tmp1<<endl;
            if(m[tmp]==1||m[tmp1]==1){
                flag=1;
                break;
            }
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
