// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    
    ll n;
    cin>>n;
    ll c=0;
    while(n>0){
        if(n%10==4||n%10==7)c++;
        n/=10;
    }
    
    string ans="YES";
    if(c==0)ans="NO";
    while(c>0){
        if(c%10!=4&&c%10!=7){
            ans="NO";
            break;
        }
        c/=10;
    }
    
    cout<<ans;
    
    return 0;
}