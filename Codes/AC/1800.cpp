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
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define scc(n) scanf(" %c", &n)
#define scs(n) scanf(" %s", n)
#define pll pair<ll, ll>
#define bigprime 9867589359258017
#define pbase 925943
#define pmod 1351782499
#define mod 1000000007
#define pi acos(-1.0)

int main()
{
    ll n, m, k, i, j, b, e, mid, x, p, q, d, ans;
    scl(n);
    scl(m);
    scl(k);
    b = 1;
    e = n*m;
    mid = (b+e)/2;
    while(b<=e)
    {
        x = mid;
        p=q=0;
        for(i=1; i<=n; i++)
        {
            d = x/i;
            if(d<=m)
                p+=d;
            else
                p+=m;
            if(x%i==0 && d<=m)
                q++;
        }
        //printf("%lld %lld %lld\n", x, p, q);
        if(k<=p && k>p-q && q!=0)
        {
            ans=x;
            break;
        }
        else if(p>=k)
            e = mid-1;
        else
            b = mid+1;
        mid = (b+e)/2;
    }
    printf("%lld\n", ans);

    return 0;


}




