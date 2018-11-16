#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[100001],b[100001]={0},l;
int dp[100001];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){cin>>a[i];}
    int t=0;
    for(int i=n-1;i>-1;i--){
        if(b[a[i]]==0){t++;}
        b[a[i]]++;
        dp[i+1]=t;
    }
    for(int i=0;i<m;i++){
        cin>>l;
        cout<<dp[l]<<endl;
    }
}
/**
////////////////      //////        ///////      //             ///////     //  //   //
////          //    ///   ///     ///    ///     //            ///  ///     ////     //
////    ////       ///     ///   ///      ///    //           /////////     ////     ///////
////     /////    ///       /// ///        ///   //          ///    ///     ////     //   //
//////////////     ///////////   ///////////     //////     ///     ///     //  //   //   //
**/
