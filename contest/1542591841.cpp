#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int cnt =0;
    int n;
    cin>>n;
    bool res=false,f1=false,f2=false;
    while(n--){
        string p;
        cin>>p;
        if(s==p){
            res = true;
        }
        if (s[0]==p[1]&& !f1){
            cnt++;
            f1=true;
        }
        if(s[1]==p[0]&& !f2)cnt++,f2=true;
    }
    if(cnt==2 || res)cout<<"YES";
    else cout << "NO";
    return 0;
}
