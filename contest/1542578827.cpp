#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define ld long double
#define f first
#define ss second
#define PI acos(-1)
#define CS ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    CS;
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==t2)return cout<<"YES" , 0;
    h*=5;h%=60;t1*=5;t2*=5;t1%=60;t2%=60;
    bool ff=1;
    if(t1==s||t2==s)ff=0;
    if((t1==m||t2==m)&&s==0)ff=0;
    if((t1==h||t2==h)&&s==0&&m==0)ff=0;
    if(!ff)return cout<<"NO" , 0;
    bool ss=1;
    for(int i=t1;i!=t2;i++){
        i%=60;
        if(i==t2)break;
        if(i==t1){if(i==s||(i==m&&s!=0)||(i==h&&(s!=0||m!=0)))ss=0;}
        else if(i==s||i==m||i==h)ss=0;
    }
    if(!ss){
        ss=1;
        for(int i=t2;i!=t1;i++){
            i%=60;
            if(i==t1)break;
            if(i==t2){if(i==s||(i==m&&s!=0)||(i==h&&(s!=0||m!=0)))ss=0;}
            else if(i==s||i==m||i==h)ss=0;
        }
    }
    if(!ss)return cout<<"NO" ,0;
    cout<<"YES";
    return 0;
}
