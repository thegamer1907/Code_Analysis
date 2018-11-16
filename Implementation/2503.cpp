// By Kishan Radia
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main(){
    string s;
    cin>>s;
    ll i,n=s.size();
    for(i=0;i<n;i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}