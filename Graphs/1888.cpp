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
        vector<lli> a;
        rep(i,n){
            cin>>g;
            a.push_back(g);
        }
        cin>>m;
        vector<lli> b;
        rep(i,m){
            cin>>g;
            b.push_back(g);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        lli ans=0;
        if(m<n){
            rep(i,m){
                rep(j,a.size()){
                    if(abs(a[j]-b[i])<=1){
                        ans++;
                        //cout<<i<<" "<<j<<endl;
                        a[j]=-1000;
                        break;
                    }
                    if(a[j]-b[i]>1)
                        break;
                }
            }
        }
        else{
                rep(i,n){
                    rep(j,b.size()){
                        if(abs(a[i]-b[j])<=1){
                            ans++;
                            b[j]=-1000;
                            break;
                        }
                        if(b[j]-a[i]>1)
                            break;
                    }
                }

        }
        cout<<ans<<endl;



        //}
        return 0;
    }
