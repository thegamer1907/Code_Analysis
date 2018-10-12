/// Kazuki Hoshino
/// Lost July

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

int n, l[505050];
string s[505000], temp;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


cin >> n;

rep(i, 1, n){
cin >> s[i];
}
l[n]=s[n].size();
rep1(i, n-1, 1){

    if(s[i]>s[i+1]){
        int j = 0, k = min(s[i].size()-1, s[i+1].size()-1) ;
        while(j<=k && s[i][j]==s[i+1][j])j++;
        l[i]=j;
        s[i]=s[i].substr(0,l[i]);
    }
    else l[i]=s[i].size();
}

rep(i, 1, n){
cout << s[i] << endl;
}

return 0;}
