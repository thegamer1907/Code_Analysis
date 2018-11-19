/**
*
* Author: MARC
* Lang: GNU C++14
*
**/

#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define ii pair < int , int >
#define LS pair < ll , string >

typedef unsigned long long ull;
typedef long double ldbl;
typedef long long ll;
typedef double dbl;

const ldbl E = 2.71828182845904523536;
const ldbl pi = acos(-1);
const dbl eps = 1e-9;
const ll mod = 1e9+7;
const ll inf = 1LL<<30;

/** /////////// ** Code ** /////////// **/

const int N=100100;

int main()
{
    string s; cin>>s;
    int n; cin>>n;
    bool slf=0 , _1=0 , _2=0;
    for(int i=0 ; i<n ; i++){
        string t; cin>>t;
        if(t == s) slf=1;
        if(t[1] == s[0]) _1=1;
        if(t[0] == s[1]) _2=1;
    }

    if(slf || (_1&&_2)) printf("YES");
    else printf("NO");

    return 0;
}
