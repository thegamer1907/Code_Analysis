/*
       _                     _     
  __| | _____   _____  ___| |__  
 / _` |/ _ \ \ / / _ \/ __| '_ \ 
| (_| |  __/\ V /  __/\__ \ | | |
 \__,_|\___| \_/ \___||___/_| |_|
*/
#include<bits/stdc++.h>
#define faster       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define  endl    '\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define rep(i,j,k)  for(int i=j;i<k;i++)
#define rrep(i,a,b)  for(ll i=a;i>=b;i--)
#define present(c,x) ((c).find(x) != (c).end())
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define what_is(x)  cout << #x << " is " << x << endl;
#define time        cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define N  100005

int main(){
  faster
    ll int n,m,k;
    cin>>n>>m>>k;
    ll int arr[m];
    rep(i,0,m)cin>>arr[i];
    ll int c=0,j=0;
    ll int q=1+(arr[0]-1)/k;
    rep(i,0,m){
        if(i==m-1)c++;
        else if(arr[i+1]-j>q*k){
            j=i+1;
            q=1+(arr[i+1]-j-1)/k;
            c++;
        }
    }
    cout<<c;
}