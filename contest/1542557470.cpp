#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h=h+m/60.0+s/3600.0;
    if(h>12)h-=12;
    m=m/5.0+(s/60)/5.0;
    if(m>12)m-=12;
    s=s/5.0;
    int mi=min(t1,t2);
    int mx=max(t1,t2);
    //cout<<h<<' '<<m<<' '<<s<<endl;
    if((h>=mi&&h<=mx&&m>=mi&&m<=mx&&s>=mi&&s<=mx)||!((h>=mi&&h<=mx)||(m>=mi&&m<=mx)||(s>=mi&&s<=mx))){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
