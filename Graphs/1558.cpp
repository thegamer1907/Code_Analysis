//
//  500A.cpp
//  OI
//
//  Created by Zhaohua Zheng on 16/8/18.
//  Copyright © 2018 Zhaohua Zheng. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#define ll long long
#define PB push_back
#define PF push_front
#define LB lower_bound
#define UB upper_bound
#define fr(x) freopen(x,"r",stdin)
#define fw(x) freopen(x,"w",stdout)
#define REP(x,l,u) for(ll x = l;x<u;x++)
#define RREP(x,l,u) for(ll x = l;x>=u;x--)
#define mst(x,a) memset(x,a,sizeof(x))
#define all(a) a.begin(),a.end()
#define PII pair<int,int>
#define PLL pair<ll,ll>
#define MP make_pair
#define se second
#define fi first
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl;
using namespace std;
int n,t;
int a[300005];
int main(){
    cin>>n>>t;
    REP(i,0,n-1){
        cin>>a[i];
    }
    int pos=0;
    while(pos<t-1){
        pos+=a[pos];
    }if (pos==t-1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
    
}
