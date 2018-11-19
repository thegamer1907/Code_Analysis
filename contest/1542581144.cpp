#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define pb push_back
using namespace std;
ll power(ll a,ll b,ll c){
    ll ret=1;
    while(b){
        if(b%2==1)
            ret=(ret*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ret;
}
int check[3],check1[3];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h>t1||(h==t1&&(m>0||s>0))){
        check[0]=1;
    }
    if(h>t2||(h==t2&&(m>0||s>0))){
        check1[0]=1;
    }
    if((m/5)>t1||((m/5==t1)&&(m%5>0||s>0))){
        check[1]=1;
    }
    //cout<<m/6<<" "<<t2<<endl;
    if((m/5)>t2||((m/5==t2)&&((m%5)>0||s>0))){
        check1[1]=1;
    }
    if(s/5>t1||(s/5==t1&&(s%5)>0)){
        check[2]=1;
    }
    if(s/5>t2||(s/5==t2&&(s%5)>0)){
        check1[2]=1;
    }
    int flag=0,flag1=0;
    for(int i=0;i<3;i++){
       // cout<<check[i]<<" "<<check1[i]<<endl;
        if(check[i]==check1[i]){
            flag=1;
        }
        else{
            flag1=1;
        }
    }
    if(flag==1&&flag1==1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}