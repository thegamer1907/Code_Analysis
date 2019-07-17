#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
freopen("in.in","r",stdin);
#endif
unsigned long long n,m,k;
cin>>n>>m>>k;
vector<unsigned long long>v(m);
for(int c=0;c<m;c++)
    cin>>v[c];
unsigned long long ans=0;
unsigned long long r=0;
unsigned long long u=0;
int idx=0;


    unsigned long long temp=0;

for(int c=0;c<m;c++){
        if(v[c]==0)continue;

    ans++;
    unsigned long long t=0;
    bool z=0;
    t=(v[c]-u)/k;
    if((v[c]-u)%k)
    t++;
    int i=c+1;
    temp++;
    v[c]=0;
    while(1){
        if(i>=m||(v[i]-u)>t*k)break;
        temp++;
        c=i;
        v[i]=0;
        i++;
    }
    u=temp;
    }

cout<<ans<<endl;
}