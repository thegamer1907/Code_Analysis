#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define MAXN  1000005
using namespace std;
ll h,m,s,t1,t2;
    ll q=360/12,w=360/60;
bool check(ll a,ll b){
    bool flag=1;
    if(((h>a)||((h==a)&&(m>0||s>0)))&&h<b)
        flag=0;
    if(((m>a)||((m==a)&&(s>0)))&&m<b)
        flag=0;
    if(s>a&&s<b)
        flag=0;
    return flag;
}
bool check1(ll a){
    bool flag=1;
    if((h==a&&m==0)&&s==0)
        flag=0;
    double h1=(((h*q)+(m*(q/60)))%360)+(s*((q*1.0)/360));
    if(h1>=359)
        flag=0;
    if(m==a&&s==0)
        flag=0;
    if(m==359)
        flag=0;
    if(s==a)
        flag=0;
    return flag;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>h>>m>>s>>t1>>t2;
    h=((h*q))%360;
    m=((m*w))%360;
    //h=((h*q)+(m*(q/60))+(s*((q)/360)))%360;
    //m=((m*w)+(s*w/60))%360;
    s=(s*w)%360;
    t1=(t1*q)%360;
    t2=(t2*q)%360;
    if(t1>t2)
        swap(t1,t2);
    if(check(t1,t2)){
        cout<<"YES";
        return 0;
    }
    if((check(t2,359)&&check(0,t1))&&(check1(359),check1(0))){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";





    return 0;
}

