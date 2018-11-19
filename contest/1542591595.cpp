//it isn't too tough :)
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) for(int (i)=0;(i)<n;(i)++)
#define bp 1000000007
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
string s;
int n,b[2],v=0;
void solve(int test){
    cin>>s;
    cin>>n;
    rep(i,n){
        string x;
        cin>>x;
        if(x==s)b[0]=b[1]=1;
        if(x[0]==s[1])b[1]=1;
        if(x[1]==s[0])b[0]=1;
    }
    if(b[0]&&b[1])
        cout<<"YES";
    else
        cout<<"NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll test=1;
    rep(i,test){
        solve(i+1);
    }
    return 0;
}
