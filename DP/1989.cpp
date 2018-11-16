    #include<bits/stdc++.h>
    using namespace std;
    #define rep(i,b) for(i=0;i<b;++i)
    #define repp(i,a,b) for(i=a;i<b;++i)
    #define endl "\n"
    #define pi 3.14159265358979323846
    typedef long long int lli;
    int main(){
       //ios_base::sync_with_stdio(false);
       //cin.tie(NULL);
        lli n,t,i,j,f,g,k,l,m,r;
        string s;
        cin>>n>>m;
        lli a[n];
        rep(i,n)cin>>a[i];
        lli rou[100001]={0};
        lli ans[100000]={0};
        for(i=n-1;i>=0;i--){
            ans[i]=ans[i+1]+(!(rou[a[i]]));
            rou[a[i]]++;
        }
        while(m--){
            cin>>g;
            cout<<ans[g-1]<<endl;

        }

        return 0;
    }
