
///The Goldbach Conjecture is a yet unproven conjecture stating that every even
///integer greater than two is the sum of two prime numbers.
///The conjecture has been tested up to 400,000,000,000,000.
#include<bits/stdc++.h>
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define ll long long
#define le length
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pll pair<long long ,long long >
#define ppll pair < pll , pll >
#define MOD 1000000007
using namespace std;
ll power(ll x,ll y)
{
    ll res = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % MOD;
         y = y>>1;
        x = (x*x) % MOD;
    }
    return res;
}
ll BINARY_SEARCH(ll dp[] , ll n , ll key) {
    ll s = 1;
    ll e = n;
    while(s <= e) {
        ll mid = (s + e) / 2;
        if(dp[mid] == key) return mid;
        else if (dp[mid] > key) e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}
string CONVERT_TO_BINARY(ll s) {
    string res = "";
    while(s != 0) {
        res += (char)('0' + s % 2);
        s /= 2;
    }
    reverse(res.begin() , res.end());
    return res;
}
bool PALIN(string s) {
    ll i = 0;
    ll j = s.le() - 1;
    while(i <= j) {
        if(s[i] != s[j]) return false;
        j-- , i++;
    }
    return true;
}
ll STOI(string s) {
    ll num = 0;
    ll po = 1;
    per(i , s.le() - 1 , 0) {
        num += po * (s[i] - '0');
        po *= 10;
    }
    return num;
}
ll modInverse(ll a,ll m){
return power(a,m-2);
}
int main(){

string s;
cin>>s;
ll n=(int)s.length();
ll index;
ll index1;
bool flag=false;
bool flag1=false;
rep(i,0,n-3){
if(s.substr(i,2)=="AB"){
   index=i+2;

   flag=true;

   break;
}
}
rep(i,0,n-3){
if(s.substr(i,2)=="BA"){
   index1=i+2;

   flag1=true;

   break;
}
}
if(flag){

    rep(i,index,n-1){
    if(s.substr(i,2)=="BA"){
        cout<<"YES";
        return 0;
    }
    }

}
if(flag1){


    rep(i,index1,n-1){
    if(s.substr(i,2)=="AB"){
        cout<<"YES";
        return 0;
    }
    }
    cout<<"NO";
    return 0;

}
cout<<"NO";
}

