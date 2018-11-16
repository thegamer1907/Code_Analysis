///The Goldbach Conjecture is a yet unproven conjecture stating that every even
///integer greater than two is the sum of two prime numbers.
///The conjecture has been tested up to 400,000,000,000,000.
/*

The lessons to learn are:
1. Read problem statement more carefully,
2. It's okay to waste another minute to check everything once more before submission,
3. Don't just wait for submission result, re-read the problem statement and your code once more.

*/
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
#define vl vector<ll>
#define trvl(c,it) for(vl::iterator it=(c).begin();it!=(c).end();it++)
#define mll map<ll,ll>
#define sl set<ll>
#define msl multiset<ll>
#define trsl(c,it) for(sl::iterator it=(c).begin();it!=(c).end();it++)
#define trmsl(c,it) for(msl::iterator it=(c).begin();it!=(c).end();it++)
#define trmll(c,it) for(mll::iterator it=(c).begin();it!=(c).end();it++)
//#define pi 3.1415926536
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
vl prefix_KMP(string &s){
vl pi;
pi[0]=0;
rep(i,1,s.length()-1){
ll j=pi[i-1];
while(j>0&&s[i]!=s[j]){
    j=pi[j-1];
}
if(s[i]==s[j]){
    j++;
}
pi[i]=j;

}
return pi;
}
vector<ll>ad[100000];
bool visited[100000];
bool flag=false;
ll n,t;
void dfs(ll start){

visited[start]=true;
//cout<<start<<endl;
rep(i,0,ad[start].size()-1){
if(visited[ad[start][i]]==false){
    if(ad[start][i]==t){
        flag=true;
        break;
    }
    else if(ad[start][i]>t){
        return;
    }
    dfs(ad[start][i]);
}
}
return;
}
int main(){
    ios_base::sync_with_stdio(false);  cin.tie(0);  cout.tie(0);
    //ll n,t;
    cin>>n>>t;
    memset(visited,false,sizeof(visited));
    //ll arr[10000+1];
    rep(i,0,n-2){
    ll x;
    cin>>x;
    ad[i].pb(i+x);
    }
   --t;

    dfs(0);
    if(flag){
        cout<<"YES";
    }
    else cout<<"NO";


}

