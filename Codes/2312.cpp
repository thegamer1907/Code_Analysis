//
//  main.cpp
//  CP
//
//  Created by Paprika on 08/05/18.
//  Copyright © 2018 CP. All rights reserved.
//

//#include "stdc++.h"
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define mp(x,y) make_pair(x,y)
#define scd(n) scanf("%d",&n)
#define sclf(n) scanf("%lf",&n)
#define scl(n) scanf("%I64d",&n)
#define repi(a,b,c) for(int i=a;i<b;i+=c)
#define repis(a,b,c) for(int i=a-1;i>=b;i-=c)
#define repj(a,b,c) for(int j=a;j<b;j+=c)
#define repjs(a,b,c) for(int j=a-1;j>=b;j-=c)
#define repk(a,b,c) for(int k=a;k<b;k+=c)
#define repks(a,b,c) for(int k=a-1;k>=0;k-=c)
#define fi first
#define se second

/*
 fast I/O

 ios::sync_with_stdio(0);
 cin.tie();

 freeopen

 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 */

typedef pair<ll,ll> ii;
const int mx = 100100;
const int md = 1e9+7;
const double EULER = 2.71828182845904523536;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.first > b.first || (a.first == b.first && a.second < b.second);
}

int limit = 1e7;

vector <int> prime;
bitset <11000000> visit;
int cnt[11000000] = {},n,x,m;

void sieve() {
    visit[0] = visit[1] = true;
    repi(2,limit,1) {
        if(!visit[i]) {
            prime.pb(i);
            repj(i*2,limit+1,i) {
                cnt[i] += cnt[j];
                visit[j] = true;
            }
        }
    }
}

int bsPref(int p) {
    int a=0,b=(int)prime.size()-1,mid;
    while(a < b) {
        mid = (a+b)/2;
        if(prime[mid] >= p) b = mid;
        else a = mid+1;
    }
    return a;

}

int bsSuf(int p) {
    int a=0,b=(int)prime.size()-1,mid;
    while(b-a > 1) {
        mid = (a+b)/2;
        if(prime[mid] > p) b = mid-1;
        else a = mid;
    }
    if(prime[b] <= p) return b;
    return a;

}


int main() {
    scd(n);
    repi(0,n,1) {
        scd(x);
        cnt[x]++;
    }
    sieve();
    repi(1,prime.size(),1) cnt[prime[i]] += cnt[prime[i-1]];
    scd(m);
    while(m--) {
        int x,y;
        ll a,b;
        scanf("%d %d",&x,&y);
        a = x;
        b = y;
        x = bsPref(x);
        y = bsSuf(y);
        if(x > y || a > prime[prime.size()-1]) printf("0\n");
        else {
            x--;
            if(x < 0) a = 0;
            else a = cnt[prime[x]];
            b = cnt[prime[y]];
            printf("%I64d\n",b-a);
        }
    }
}
