// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    ll k,l=s.size(),i;
    for(k=0;k<t;k++){
        for(i=0;i<l-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}