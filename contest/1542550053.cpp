#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    string str, str2;
    int i, j, n, k;
    cin >> str;
    j = k = 0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str2;
        if(str2==str){
            cout << "YES";
            return 0;
        }
        if(str2[1]==str[0]) j = 1;
        if(str2[0]==str[1]) k = 1;
    }
    if(j&&k) cout << "YES";
    else cout << "NO";
    return 0;
}
