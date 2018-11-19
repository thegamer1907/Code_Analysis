#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
typedef long long ll;

const int N=2e5+6;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;
int vis[2000][2];
int main(void){
    string ans="";
    cin >> ans;
    int n;cin>>n;
    string t="";
    for(int i=1;i<=n;i++){
        string s="";
        cin>>s;
        vis[s[0]][1]=1;
        vis[s[1]][2]=1;
        if(s==ans){
            cout <<"YES"<<endl;
            return 0;
        }
    }
    if(vis[ans[0]][2]&&vis[ans[1]][1]){
        cout <<"YES"<<endl;
    }
    else    cout<<"NO"<<endl;
    return 0;
}
