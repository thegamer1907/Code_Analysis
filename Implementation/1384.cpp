//RAJ KUMAR SINGH, DTU
//rajksingh3878@gmail.com

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define inf 0x7fffffff

int main(){
    fast;
    ll n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
    for(ll i = 0; i < n;){
        if(s[i] == 'B' && s[i+1] == 'G'){
            swap(s[i],s[i+1]);
            i+=2;
        }
        else{
            i++;
        }
    }
}
    cout<<s;

    

    return 0;

}