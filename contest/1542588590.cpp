#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t[3];
    cin>>t[0]>>t[1]>>t[2];
    t[1]/=5;
    t[2]/=5;
    sort(t,t+3);
    int a,b;
    cin>>a>>b;
    int pa=-1,pb=-1;
    for(int i=0;i<3;i++){
        if(a<=t[i]&&pa==-1)pa=i;
        if(b<=t[i]&&pb==-1)pb=i;
    }
    if(pa==-1)pa=0;
    if(pb==-1)pb=0;
    if(pa==pb)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}

