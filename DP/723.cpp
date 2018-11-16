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
        //cin>>t;
        //while(t--){
        string s;
        cin>>s;
        n=s.length();
        lli ans[n]={0};
        if(s[0]==s[1])
            ans[0]=1;
        repp(i,1,n-1)ans[i]=ans[i-1]+(s[i]==s[i+1]);
        ans[n-1]=ans[n-2];
        //rep(i,n)cout<<ans[i]<<" ";
        cin>>m;
        while(m--){
            cin>>l>>r;
            l--;
            r--;
            if(l==0&&r!=n-1){
                cout<<lli(ans[r]-(s[r]==s[r+1]))<<endl;
            }
            else if(l==0&&r==n-1){
                cout<<ans[r]<<endl;
            }
            else if(r==n-1)
                cout<<lli(ans[r]-ans[l-1])<<endl;
            else
                cout<<lli(ans[r]-ans[l-1]-(s[r]==s[r+1]))<<endl;

        }

        //}
        return 0;
    }
