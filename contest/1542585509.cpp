#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
   string pass;
   string s;
   string one="";
   string two="";
   cin >> pass;
   string first="",last="";
   int n;
   cin >> n;
   for(ll i = 1; i<=n; i++){
    string s;
    cin >> s;
    if(s[0]==pass[0]&& s[1]==pass[1]){
        cout << "YES" << endl;
        return 0;
    }
    first+=s[0];
    last+=s[1];
   }
   for(ll i = 0; i<last.size(); i++){
     if(last[i]==pass[0]){
        for(ll j = 0; j<first.size(); j++){
            if(first[j]==pass[1]){
                cout << "YES" << endl;
                return 0;
            }
        }
     }
   }
   cout << "NO" << endl;
return 0;
}

