#include<bits/stdc++.h>
#define pr pair<int,int>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2){
        h=h*5%60;
        t1=t1*5%60;
        t2=t2*5%60;
        int tos=h*3600+m*60+s;
        int mod=3600*60;
        h=tos;
        m=tos*60%mod;
        s=tos*3600%mod;

        t1=t1*3600%mod;
        t2=t2*3600%mod;
        //cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<"\n";
        bool f=0;
        for(int i=t1;;i++){
            i=i%mod;
            //if(i==60*3600) i=0;
            if(i==t2){
                f=1;
                break;
            }
            if((i==h||i==s||i==m)&&i!=t1) break;
        }
        for(int i=t1;;i--){
            i=(i+mod)%mod;
            //if(i==-1) i=60*3600-1;
            if(i==t2){
                f=1;
                break;
            }
            if((i==h||i==s||i==m)&&i!=t1) break;
        }
        if(f) cout<<"YES\n";
        else  cout<<"NO\n";
    }
    return 0;
}
