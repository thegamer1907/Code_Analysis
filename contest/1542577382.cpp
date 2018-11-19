#include<bits/stdc++.h>
using namespace std;
map<string,bool>vis;
bool check(string s)
{
    for(map<string,bool>::iterator it=vis.begin();it!=vis.end();++it){
        bool shit=1;
        for(int i=0;i<s.size();i++){
            if((s[i]=='1'&&it->first[i]=='1')){
                shit=0;
                break;
            }
        }
        if(shit) return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    int n,k;
    while(cin>>n>>k){
        bool f=0;
        vis.clear();
        for(int i=0;i<n;i++){
            string s="";
            for(int j=0;j<k;j++) {
                bool x;cin>>x;
                if(x) s+="1";
                else  s+="0";
            }
            vis[s]=1;
            if(check(s)) f=1;
        }
        if(f) cout<<"YES\n";
        else  cout<<"NO\n";
    }
    return 0;
}
