#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()

int main(){
    string pw;cin>>pw;
    bool b=false,a=false;
    int n;cin>>n;
    REP(i,n){
        string str;cin>>str;
        if(str==pw){
            b=true;
            a=true;
            break;
        }
        if(str[1]==pw[0]){
            b=true;
        }
        if(str[0]==pw[1]){
            a=true;
        }
    }
    if(b==true and a==true){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
