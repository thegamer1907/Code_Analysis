/// In The Name Of Allah
#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define S second
#define F first
#define OO LLONG_MAX
using namespace std;
const int N=100011;
int arr[N][4],n,m,h,s,t1,k;
map<string,bool>mp,vis;
vector<string>v,vc;
void get(string u,string s,int i){
    if(i==s.size()){
        vc.pb(s);
        return;
    }
    if(u[i]=='1'){
        s[i]='0';
        get(u,s,i+1);
    }
    else{
        s[i]='0';
        get(u,s,i+1);
        s[i]='1';
        get(u,s,i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n>>k;
    for(int i=0 ; i<n ; i++){
        string s="";
        for(int j=0 ; j<k ; j++){
            cin>>arr[i][j];
            if(arr[i][j]==0)    s+="0";
            else    s+="1";
        }
        v.pb(s);
        mp[s]=1;
    }
    for(auto u : v){
        if(vis[u])  continue;
        vis[u]=1;
        vc.clear();
        get(u,u,0);
        for(auto s : vc)
            if(mp[s])  return cout<<"YES"<<endl,0;
    }
    cout<<"NO"<<endl;
}
