#include <bits/stdc++.h>

using namespace std;
string s;
string A[105];
int main(){
    ios::sync_with_stdio(0);
    cin >> s;
    int n;cin >> n;
    for(int i=1;i<=n;++i) cin >> A[i];
    bool flag=0;
    for(int i=1;i<=n;++i){
        if(A[i]==s){
        flag=1; break;}
    }
    if(flag){
        cout << "YES" << endl;
        return 0;
    }
    for(int i=1;i<=n;++i){
        if(A[i][1]==s[0]){
            flag=1;break;
        }
    }
    if(!flag){
        cout << "NO" << endl;return 0;
    }
    flag=0;
    for(int i=1;i<=n;++i){
        if(A[i][0]==s[1]){
            flag=1;break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
