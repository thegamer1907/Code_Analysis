// In The Name Of God
#include<bits/stdc++.h>
using namespace std;
#define for2(a,b,c) for(int (a) = (b); (a) < (c); (a)++)
int f[1000100];
main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    int k = 0;
    for2(i,1,s.length()){
        while(k && s[k] != s[i]) k = f[k];
        if(s[k] == s[i]) k ++;
        f[i+1] = k;
    }
    if(k)for2(i,0,s.length()) if(f[i] == k){
        for2(i,0,k) cout << s[i];
        cout << endl;
        exit(0);
    }
    if(k && f[k]){
        for2(i,0,f[k]) cout << s[i];
        cout << endl;
    }else cout << "Just a legend" << endl;
}
