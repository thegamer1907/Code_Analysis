#include<bits/stdc++.h>
using namespace std;
int main (){
    string s,c;
    cin >> s;
    int n;
    cin >> n;
    int t=0,k=0;
    for(int i=1;i<=n;i++)
    {
        cin >>c;
        if(c == s) {cout << "YES"; return 0;}
        if(c[1] == s[0]) k=1;
        if(c[0] == s[1] ) t=1;

    }
    if(t == k && k == 1) cout << "YES";
    else cout <<  "NO";
    return 0;
}
//hp
//2
//ht
//tp
