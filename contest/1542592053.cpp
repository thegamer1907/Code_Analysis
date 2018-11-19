#include<bits/stdc++.h>

using namespace std;
string ans;
string s;
int main()
{
    int n;
    cin>>ans;
    cin>>n;
    int flag=false;int cnt1=0,cnt0=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s==ans) flag=true;
        if(s[0]==ans[1]) cnt1=1;
        if(s[1]==ans[0]) cnt0=1;
    }
    if(cnt1==1&&cnt0==1) flag=true;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
