#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pi> vpi;
#define inf 1000000000
#define mod 1000000007
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define rep1(i, a, b) for(int i =a; i >=b; i--)
#define f first
#define ss second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define mt make_tuple

int ans;
vi suf;

vector<int> zal( string s){

    int n = s.size();

    vector<int> z(1010111);

    for(int i=1,l=0,r=0; i<n; i++){

        if(i<=r){
            z[i] = min(z[i-l], r-i+1);
        }

        while(i + z[i] < n && s[z[i]]==s[i+z[i]])z[i]++;

        if(i+z[i]-1>r){
            l = i;
            r = i + z[i] -1;
        }

    }

    return z;

}


int main(){
ios::sync_with_stdio(0);
cin.tie(0);

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

string s;

cin >> s;

int k = s.size();

vi z = zal(s);

rep(i, 1, k-1){

    if(z[i]+i == k){
        suf.pb(z[i]);
    }

}

if(suf.size()<=0){
    cout << "Just a legend" << endl;
    return 0;
}

sort(all(suf));

rep(i, 1, k-1){

if(i+z[i]==k)z[i]--;

int m = lower_bound(all(suf), z[i]) - suf.begin();

if(suf[m]==z[i])ans = max(ans, suf[m]);
m--;
if(m>=0){
    ans = max(ans, suf[m]);
}


}


if(ans==0){
    cout << "Just a legend" << endl;
}
else {
    rep(i, 0, ans-1){
    cout << s[i];
    }
}


return 0;}
