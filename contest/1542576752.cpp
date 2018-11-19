#include<bits/stdc++.h>
using namespace std;
string s[102];
string a;
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    bool flag=false;
    cin>>a>>n;
    for(int i=0;i<n;++i){
        cin>>s[i];
        if(s[i]==a) flag=1;
    }
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            if(s[i][1]==a[0] && s[j][0]==a[1]) flag=true;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
/**
#include<bits/stdc++.h>
using namespace std;
string a;
vector<int> g[102];
string s[102];
int num[102];
bool flag;
int n;
void dfs(string t){
    if(flag) return;
    if(t.find(a)!=t.npos){
        flag=true;
        return;
    }int len=t.length();
    for(int i=0;i<n;++i){
        if(num[i]==2) continue ;
        //if(t[len-1]!=s[i][0]) continue;
        ++num[i];
        dfs(t+s[i]);
        --num[i];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a;
    cin>>n;
    for(int i=0;i<n;++i) cin>>s[i];
    memset(num,0,sizeof(num));
    for(int i=0;i<n;++i){
        flag=false;
        ++num[i];
        dfs(s[i]);
        if(flag) break;
        --num[i];
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
**/
/*
ya
4
ah
oy
to
ha
*/
