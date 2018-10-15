#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string a[500010];
string mg;
void rec(int v){
    if(v<0){return;}
    string jj="";
    if(a[v]>mg){
        for(int i=0;a[v][i]<=mg[i];i++){
            jj+=a[v][i];
        }
    }
    else{jj=a[v];}
    a[v]=jj;
    mg=jj;
    return rec(--v);
}
int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    mg=a[n-1];
    rec(n-2);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
/**
////////////////      //////        ///////      //             ///////     //  //   //
////          //    ///   ///     ///    ///     //            ///  ///     ////     //
////    ////       ///     ///   ///      ///    //           /////////     ////     ///////
////     /////    ///       /// ///        ///   //          ///    ///     ////     //   //
//////////////     ///////////   ///////////     //////     ///     ///     //  //   //   //
**/
