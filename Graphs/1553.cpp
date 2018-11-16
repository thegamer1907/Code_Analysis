#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define fast ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define sz(a) a.size()
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define get(a) #a
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pair<int,int> >
#define all(a) a.begin(),a.end()
//get(a) returns a as string literal i.e. "a"
#define Endl "\n"
using namespace std;
int main(){
    fast
    int n,t;cin>>n>>t;
    vi a(n+1);
    rep(i,2,n+1) cin>>a[i];
    bool visited[n+1];
    memset(visited,0,sizeof visited);
    visited[1]=true;
    int index=1;
    while(visited[index]){
        if(index==t){
            cout<<"YES"<<Endl;
            return 0;
        }
        if(index==n)
            break;
       // cout<<"index="<<index<<"\ta[i]="<<a[index+1]<<Endl;

        index+=a[index+1];
        visited[index]=true;
    }
    cout<<"NO"<<Endl;

}
