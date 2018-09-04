#include<bits/stdc++.h>
using namespace std;
#define rep(i, l, r) for (int i = l; i<r;i++)
#define dec(i, l, r) for (int i = l; i>=r;i--)
#define vi vector<int>
#define all(v) v.begin(),v.end()
#define pb(c) push_back(c)
#define vii vector<pair<int,int>>
#define ii pair<int,int>
#define mp(i, j) make_pair(i,j)
#define ull unsigned long long int
#define ll  long long int
#define pie 3.141592653589793238
#define inf ((ll)1e18)
#define eps 1e-7
#define mod ((ll)1e9+7)
#define maxlg 18
const int maxn = ((int) 5e5) +5 ;
#define left(i) ((i)<<1)
#define right(i) ((i)<<1)+1
int n,m;
int freq[2*maxn];
int streak[5001][5001];

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
int suffixLen[maxn*2];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
#endif
    string s;
    cin>>s;
    vi ans = z_function(s);
    int from=0;



    int res =0;
    for (int i=s.length()-1;i>=1;i--) {
        if (i+ans[i]!=s.length()) {
            suffixLen[ans[i]] = 1;
        } else if (ans[i]>0){
            suffixLen[ans[i]-1]=1;
        }
    }
    for (int i=s.length()-1;i>=0;i--) {
         suffixLen[i] += suffixLen[i+1];
    }
    for (int i=s.length()-1;i>=1;i--) {
        if (ans[i]==(s.length())-(i) && suffixLen[ans[i]]>0) {
            res = max(res,ans[i]);

        } else {

        }
    }
    if (res==0){
        cout<<"Just a legend";
    }else {
        rep (i,0,res)cout<<s[i];
    }
        return 0;
}




//cout<<"Case #"<<++T<<": ";