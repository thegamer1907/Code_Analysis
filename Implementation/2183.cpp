#include<bits/stdc++.h>
using namespace std;

#define rep(i,s,n) for(int i=s; i<n; i++)
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    long long int a=0, b=0, c=0, d, e, f;
    rep(i,0,n){
        cin>>d>>e>>f;
        a+=d;
        b+=e;
        c+=f;
    }

    if(a==0 && b==0 && c==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
