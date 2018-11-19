/// 404 Err Can't Find Code </> 
// Infinity Loop :)

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <math.h>
#include <queue>
#include <vector>
#include <fstream>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define fr first
#define sc second
#define FIX(x) cout.precision(x)
#define sz(x) ((int)(x).size())
#define smax(x,y) ((x)=max((x),(y)))
#define smin(x,y) ((x)=min((x),(y)))
#define all(x) (x).begin(),(x).end()
#define mem(x) memset(x,0,sizeof(x))
#define connect(z,x,y) z[x].pb(y),z[y].pb(x)
#define _ ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//#define cin fin
typedef long long int ll;
typedef pair<int,int> pii;

const ll N = 1e6;
const ll mod = 1e9+7;
const ll inf = LLONG_MAX;

int status,h,m,s,t1,t2;
double a[5];


int32_t main()
{_
	cin>>h>>m>>s>>t1>>t2;
    a[0]=h*5 + 0.1 ,  a[1]=m + 0.1 ,   a[2]=s + 0.1 ,  a[3]=t1*5 ,a[4]=t2*5;
    sort( a , a + 5 ) ;
    for( int i=0 ; i<4 ; i++ ) if(((t1*5==a[i]) and (t2*5==a[i+1])) or ((t2*5==a[i]) and (t1*5==a[i+1]))) status++;
    if((t1*5==a[0] and t2*5==a[4]) or (t2*5==a[0] and t1*5==a[4])) status++;
    return cout << ( status>0 ? "YES\n" : "NO\n" ) , EXIT_SUCCESS ;
}
