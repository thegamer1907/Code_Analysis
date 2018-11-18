#include<bits/stdc++.h>
using namespace std;
#define faster_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster_io;
    int n,f1=0,f2=0,f3=0,f4=0;
    string s,s1;
    cin>>s>>n;

    while(n--){
        cin>>s1;
        if(s1[1]==s[0]) f3=1;
        if(s1[0]==s[1]) f4=1;
        if(s[0]==s1[0] && s[1]==s1[1])f3=1,f4=1;
    }

    if(f3 && f4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
