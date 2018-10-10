#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define mp make_pair

typedef pair<long long,long long> ii;

const long long mod = 1e9+7;

long long n,l,r,m;

bool check(long long x){
    m = n;
    long long amount = 0;
    while(m>0){
        amount += min(m,x);
        m-=x;
        if(m<=0) break;
        long long candy = m/10;
        m -= candy;
    }
    if(2*amount>=n)
        return 1;
    else
        return 0;
}

int main(){
    cin.tie(0),ios::sync_with_stdio(0);
    cin >> n;
    l = 1;
    r = n;
    while(l<r){
        long long mid = (l+r)/2;
        if(mid<0)
            r = mid;
        if(check(mid)==1)
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
}