//
//  main.cpp
//  368B
//
//  Created by Pablo César Ruíz Hernández on 9/25/18.
//  Copyright © 2018 Pablo César Ruíz Hernández. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>
#define ll long long
#define ull unsigned long long
#define FOR(m,s,n,u) for(long long m=s; m<n; m+=u)
#define ROF(m,s,n,u) for(long long m=n; m>=n m-=u)
#define min(x,y) x<y?x:y
#define pb push_back
#define mod 1000000009
#define MOD(x) ((x%mod)+mod)%mod
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define si set<int>
using namespace std;

int main() {
    sync;
    si s;
    int n,m;
    cin>>n>>m;
    int a[n],b,res[n];
    FOR(i,0,n,1)cin>>a[i];

    for(int i=n-1; i>=0; i--){
        s.insert(a[i]);
        res[i]=s.size();
    }
    for(long long i=0; i<m; i++){
        cin>>b;
        cout<<res[b-1]<<endl;
    }
    /*
     10 10
     1 2 3 4 1 2 3 4 100000 99999
     1
     2
     3
     4
     5
     6
     7
     8
     9
     10
     
     6
     6
     6
     6
     6
     5
     4
     3
     2
     1
     
     
     8 3
     8 6 4 3 4 2 4 8
     6
     4
     2
     
     3
     4
     5
     */
}
