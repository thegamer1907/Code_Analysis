#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int g[10000]={0};
int c[10000]={0};
int cc[10000]={0};
int mk[10000]={0};
ll dfs(int v){
    if(mk[v]==1){
        return 0;
    }
    ll t=0;
    mk[v]=1;
    if(cc[v]!=c[v]){
        cc[v]=c[v];
        t++;
    }
    if(v!=0){
        cc[g[v-1]]=c[v];
        //cout<<v<<' '<<g[v-1]<<endl;
        t+=dfs(g[v-1]);
    }
    for(int i=0;i<n-1;i++){
        if(g[i]==v){
            cc[i+1]=c[v];
            //cout<<v<<' '<<i+1<<endl;
            t+=dfs(i+1);
        }
    }
    return t;
}
int main(){
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>g[i];
        g[i]--;
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    cout<<dfs(0);
}
/**
////////////////      //////        //             ///////     //  //   //
////          //    ///   ///       //            ///  ///     ////     //
////    ////       ///     ///      //           /////////     ////     ///////
////     /////    ///       ///     //          ///    ///     ////     //   //
//////////////     ///////////      //////     ///     ///     //  //   //   //
**/
