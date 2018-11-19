#include<bits/stdc++.h>
using namespace std;
string ans;
string tmp;
int main()
{
    ios::sync_with_stdio(0);
    while(cin>>ans){
        char s=ans[0],b=ans[1];
        bool f1=0,f2=0;
        int n;
        cin>>n;
        while(n--){
            cin>>tmp;
            if(tmp[1]==s) f1=1;
            if(tmp[0]==b) f2=1;
            if(tmp[0]==s&&tmp[1]==b) f1=f2=1;
        }
        if(f1&&f2) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
