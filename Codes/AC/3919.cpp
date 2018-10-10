#include<bits/stdc++.h>
using namespace std;
string s;
long long l,r=1e15,mid,money,n[3],p[3],c[3];
inline bool check(long long x){
    long long cur=0;
    for(int i=0;i<3;i++){
        cur+=max(0ll,x*c[i]-n[i])*p[i];
    }
    return cur<=money;
}
int main(){
    cin>>s>>n[0]>>n[1]>>n[2]>>p[0]>>p[1]>>p[2]>>money;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            c[0]++;
        }
        else if(s[i]=='S'){
            c[1]++;
        }
        else{
            c[2]++;
        }
    }
    while(r-l>1){
        mid=(r+l)>>1;
        if(check(mid)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    if(check(r))
        cout<<r;
    else
        cout<<l;
}
