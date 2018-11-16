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
        lli n,t,i,j,f,g,k,l,m;
        //cin>>t;
        //while(t--){
        cin>>n;
        bool a[n+2];
        repp(i,1,n+1)cin>>a[i];
        lli pr[n+2]={0};
        lli po[n+2]={0};
        pr[1]=0;
        repp(i,2,n+2)pr[i]=pr[i-1]+a[i-1];
        for(i=n-1;i>=0;i--)po[i]=po[i+1]+a[i+1];
        /*
        repp(i,1,n+1)cout<<pr[i]<<" ";
        cout<<endl;
        repp(i,1,n+1)cout<<po[i]<<" ";
        cout<<endl;
        */

        lli ans=0;
        repp(i,1,n+1){
            repp(j,i,n+1){
                lli sum=pr[i]+po[j];
                repp(g,i,j+1)sum+=(!(a[g]));
                if(sum>ans)
                    ans=sum;
            }
        }
        cout<<ans<<endl;


        //}
        return 0;
    }
