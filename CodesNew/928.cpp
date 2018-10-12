#include<bits/stdc++.h>
using namespace std;

string s[1005],s2[1005];
map<string ,int>mp;
bool cmp(string a,string b){
    return mp[a]>mp[b];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        mp[s[i]]++;
    }
    for(int i=1;i<=m;i++){
        cin>>s2[i];
        mp[s2[i]]++;
    }
    int p1=0,p2=0;
    sort(s+1,s+1+n,cmp);
    sort(s2+1,s2+1+m,cmp);
    int ans1=1,ans2=1;
    while(1){
            while(mp[s[ans1]]==0){
                ans1++;
                if(ans1>n) break;
            }
            if(ans1>n) {p1=1;break;}
            mp[s[ans1]]=0;
            while(mp[s2[ans2]]==0){
                ans2++;
                if(ans2>m) break;
            }
            if(ans2>m) {p2=1;break;}
            mp[s2[ans2]]=0;
    }
    if(p1==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
return 0;
}
/*

*/
