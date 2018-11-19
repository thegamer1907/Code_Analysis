#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,x;
    int n;
    bool c1=false,c2=false;
    cin>>s>>n;
    while(n--){
        cin>>x;
        if(x==s){
            c1=true;
            c2=true;
        }
        if(x[0]==s[1]) c2=true;
        if(x[1]==s[0]) c1=true;
    }
    if(c1&&c2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

}
