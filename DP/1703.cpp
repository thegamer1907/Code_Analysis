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
        cin>>s;
        lli ab=0;
        lli ba=0;
        g=0;
        lli st=-1;
        lli st2=-1;
        n=s.length();
        rep(i,n-1){
            if(s[i]=='A'&&s[i+1]=='B'){
                st2=st;
                st=i;
                g++;
            }
        }
        if(g==0){
            cout<<"NO"<<endl;
            return 0;
        }
        rep(i,n-1){
            if(s[i]=='B'&&s[i+1]=='A'&&st+1!=i&&st!=i+1){
                cout<<"YES"<<endl;
                return 0;
            }
            if(st2!=-1){
                if(s[i]=='B'&&s[i+1]=='A'&&st2+1!=i&&st2!=i+1){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;

        return 0;
    }
