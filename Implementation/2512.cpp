#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ok=0;
    for (int i=0;i<s.size();++i){
        if (s[i]=='H'||s[i]=='Q'||s[i]=='9') ok=true;
    }
    if (ok) cout<<"YES";
    else cout<<"NO";
}
