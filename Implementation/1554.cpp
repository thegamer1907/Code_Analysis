#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    
    for(ll i=1; i<s.size(); i++){
        ll sum=1;
        while(s[i]==s[i-1]){
            sum++;
            i++;
        }
        if(sum>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
