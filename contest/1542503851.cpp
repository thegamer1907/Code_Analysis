#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,p;
    int n;
    cin>>s>>n;
    bool a=false,b=false;
    while(n--){
        cin>>p;
        if(p[1]==s[0])
                a = true;
        if(p[0]==s[1])
                b = true;
        if(s==p) {
            a = true;
            b = true;
        }
    }
    cout<<((a && b)? "YES\n" : "NO\n");
    return 0;
}
