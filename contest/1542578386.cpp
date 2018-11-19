
#include<bits/stdc++.h>
using namespace std;


const int N=1e5+5;




int n,m,a[N][5],cur[5];
string v,t;
map<string,bool>used;
bool p=true;

inline bool check(){
    for(int i=1;i<=m;i++){
        if(cur[i]+v[i-1]=='1'>1){
            return false;
        }
    }
    return true;
}

void rec(int pos=0){
    if(pos==m){
        if(used[v] && check()){
            cout<<"YES";
            exit(0);
        }
        return;
    }
    if(t[pos]=='1'){
        v+='0';
        rec(pos+1);
        v.pop_back();
    }
    else{
        v+='0';
        rec(pos+1);
        v.pop_back();
        v+='1';
        rec(pos+1);
        v.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int cur=0;
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(!a[i][j]){
                cur++;
            }
        }
        if(cur==m){
            return cout<<"YES",0;
        }
    }
    for(int i=1;i<=n;i++){
        t="";
        memset(cur,0,sizeof(cur));
        for(int j=1;j<=m;j++){
            t+=char(a[i][j]+'0');
            if(a[i][j]){
                cur[j]++;
            }
        }
        rec();
        used[t]=true;
    }
    cout<<"NO";
}
