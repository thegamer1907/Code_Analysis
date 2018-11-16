#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[100000],dp[100000];
int main(){
    cin>>n;
    cin>>a[0];
    ll mx=1;
    dp[0]=1;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>a[i-1]){
            dp[i]=dp[i-1]+1;
            mx=max(mx,dp[i]);
        }
        else{dp[i]=1;}
    }
    cout<<mx;
}
/**
////////////////      //////        ///////      //             ///////     //  //   //
////          //    ///   ///     ///    ///     //            ///  ///     ////     //
////    ////       ///     ///   ///      ///    //           /////////     ////     ///////
////     /////    ///       /// ///        ///   //          ///    ///     ////     //   //
//////////////     ///////////   ///////////     //////     ///     ///     //  //   //   //
**/
