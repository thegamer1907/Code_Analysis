#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
struct node{
    double v;
    bool t;
}a[5];
bool cmp(node a,node b){
    return a.v<b.v;
}
int main() {
    
    int  h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    node a[5];
    a[0].v=30*h+.5*m+1./120*s;
    a[0].t=false;
    a[1].v=6*m+0.1*s;
    a[1].t=false;
    a[2].v=6*s;
    a[2].t=false;
    
    a[3].v=30*t1;
    a[3].t=true;
    a[4].v=30*t2;
    a[4].t=true;
    sort(a,a+5,cmp);
    bool gb=false;
    for(int i=0;i<4;++i){
        if(a[i].t&&a[i+1].t)
            gb=true;
    }
    if(a[0].t&&a[4].t)
         gb=true;

    if(gb)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}