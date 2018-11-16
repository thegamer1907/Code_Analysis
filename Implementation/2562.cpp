#include <bits/stdc++.h>
#define For(i,n) for(int i =0;i<n;i++)
#define vl vector<long long>
#define pll pair<long long,long long>
#define debug(a) cerr<<#a<<": "<<a<<endl;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long unsigned ll;
using namespace std;


int main(){
#ifdef FFFeelipe
    freopen("/home/fffeelipe/Contest/in.txt" ,"r",stdin);
    freopen("/home/fffeelipe/Contest/out.txt","w",stdout);
#endif
    //fastIO;
    int n,h;
    cin>>n>>h;
    int ans = n;
    For(i,n){
        int c;
        cin>>c;
        if(c>h)
            ans++;

    }
    cout<<ans;
}
