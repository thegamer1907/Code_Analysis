#include <bits/stdc++.h>
#define re return
using namespace std;
string s,k;
int n;
map<char,int> mp,mp2;
int main(){
    cin >> s >> n;
    while(n--){
        cin >> k;
        if(s==k)exit(puts("YES"));
        mp[k[1]]=true;
        mp2[k[0]]=true;
    }
    if(mp[s[0]]&&mp2[s[1]])exit(puts("YES"));
    cout<<"NO";
    re 0;
}