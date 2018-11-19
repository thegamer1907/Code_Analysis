#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void sol(){
//    freopen("io.txt", "a+", stdout);
//    freopen("io.txt", "r", stdin);
//    printf("\nsol---%s\n", __TIMESTAMP__);
    int n;
    string s;
    vector<bool> t(2, false);
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        if(a[0] == s[1])
            t[1] = true;
        if(a[1]==s[0])
            t[0] = true;
        if(s==a){
            cout << "YES";
            return;
        }
    }
    if(t[1]&&t[0])
        cout << "YES";
    else
        cout << "NO";
}
int main(){
    sol();
}


