#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fr first
#define sc second
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define scc(n) scanf(" %c", &n)
#define scs(n) scanf(" %s", n)
#define pll pair<ll, ll>
#define bigprime 9867589359258017
#define pbase 925943
#define pmod 1351782499
#define pi acos(-1.0)

int main()
{
    ll n, i, j, b, e, mid, k, ans=1e18, m, p, d, q;
    scl(n);
    b = 1;
    e = n;
    mid = (b+e)/2;
    ans+=10;
    while(b<=e)
    {
       // cout<<mid<<endl;
        k = mid;
        p = 0;
        q=0;
        m = n;
        while(m!=0)
        {
            //cout<<m<<endl;
            if(m>=k){
            p+=k;
            m-=k;
            }
            else{
                p+=m;
                m=0;
            }
           // m-=k;
            d = m/10;
            q+=d;
            m-=d;
        }
        if(p>=q)
        {
            ans = min(ans, k);
            e = mid-1;
        }
        else
            b = mid+1;
        mid = (b+e)/2;


    }
    cout<<ans<<endl;


}




