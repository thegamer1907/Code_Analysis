#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+25;
long double h,m,s,t1,t2;
int main() {
    cin>>h>>m>>s>>t1>>t2;
    h+=m/60+s/3600;
    m+=s/60;
    m=m/5;
    s=s/5;
    int p=0;
    long double t[3];
    t[0]=h;
    t[1]=m;
    t[2]=s;
    if(t2>t1)swap(t2,t1);
    for(int i=0;i<3;i++){
        if(t[i]>12)t[i]-=12;
        if(t[i]<t1&&t[i]>t2)break;
        if(i==2)p=1;
    }
    if(!p){
        for(int i=0;i<3;i++){
        if(t[i]>t1||t[i]<t2)break;
        if(i==2)p=1;
    }
    }
    puts(p?"YES":"NO");
    return 0;
}

