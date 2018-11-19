/*
ID: sali.ad1
PROG: combo
LANG: C++11
*/
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int f(string p, string t)
{
    if(t[0] == p[0] && t[1] == p[1]){
        return 1;
    }
    if(t[1] == p[0] && t[2] == p[1]){
        return 1;
    }
    if(t[2] == p[0] && t[3] == p[1]){
        return 1;
    }
    return 0;
}
int main()
{
    string pas;
    cin >> pas;
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<string> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string s = a[i] + a[j];
            ans.pb(s);
        }
    }
    for(int i = 0; i < ans.size(); i++){
        if(f(pas,ans[i])){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
/**< WRITED BY ALI ADELKHAH */
