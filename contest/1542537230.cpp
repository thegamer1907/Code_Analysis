//
//  868B.cpp
//  Competitive Programming
//
//  Created by Kailashnath Nagendran on 05/10/17.
//  Copyright © 2017 Kailashnath Nagendran. All rights reserved.
//

#include <string.h>
#include <limits.h>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <math.h>
#include <map>
#include <iterator>
#include <set>
using namespace std;
#define mod 1000000007
#define fr(i,l,r) for(int i=l;i<r;i++)
#define rfr(i,l,r) for(int i=r-1;i>=l;i--)
#define wh(t) while(t--)
#define ret return
#define ll long long
#define get(x) cin>>x
#define put(x) cout<<x
#define pls(x) cout<<x<<' '
#define pln(x) cout<<x<<"\n"
#define pnl() cout<<"\n"
#define ppair(x) cout<<x.first<<' '<<x.second<<"\n";
#define pb(x) push_back(x)
#define sz size
#define szo sizeof
#define br break
#define con continue
#define pr(x,y) pair<x,y>
#define ms(a,v) memset(a,v,sizeof(a))
#define mpair(x,y) make_pair(x,y)
#define v(k) vector<k >
#define vp(x,y) vector<pair<x,y> >
#define MAXN 1e6



int main() {
    int h,m,s,t1,t2;
    scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    int c1 = 0;
    for(int i = min(t1,t2);i<max(t1,t2);i++){
        if(i==h)
            c1++;
    }
    for(int j = min(t1,t2)*5;j<max(t1,t2)*5;j++){
        if(j==m)
            c1++;
        if(j==s)
            c1++;
    }
    if(c1==3||c1==0)
        printf("YES\n");
    else
        printf("NO\n");
    ret 0;
}