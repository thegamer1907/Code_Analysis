#include<bits/stdc++.h>
using namespace std;
long long aa=0,bb=0,cc=0;
long long a,b,c,x,y,z;
long long mon;
long long hampric;

bool check(long long ans){
    long long cost=ans*hampric;
    return cost-min(a,ans*aa)*x-min(b,ans*bb)*y-min(c,ans*cc)*z<=mon;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B')aa++;
        else if(s[i]=='S')bb++;
        else if(s[i]=='C')cc++;
    }
    cin>>a>>b>>c>>x>>y>>z;
    cin>>mon;
    hampric=aa*x+bb*y+cc*z;
    long long st=0,en=2e12,mid;
    while(st<en){
        mid=(st+en)/2;
        if(check(mid)){
            st=mid+1;
        }
        else{
            en=mid;
        }
    }
    cout<<st-1<<"\n";
    return 0;
}