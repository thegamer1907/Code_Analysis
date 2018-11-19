//
//  868A.cpp
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
#define vec(x) vector<x >
#define parray(a,n) fr(i,0,n){ pls(a[i]); } pnl();
#define cin cin



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string word;
    get(word);
    int n;
    get(n);
    map<char,int> start,end;
    map<string,int> full;
    fr(i,0,n){
        string w;
        get(w);
        start[w[0]] = 1;
        end[w[1]] = 1;
        full[w] = 1;
    }
    if(full[word]||(end[word[0]]&&start[word[1]]))
        pln("YES");
    else
        pln("NO");
    ret 0;
}
