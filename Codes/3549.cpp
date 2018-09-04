#define pb push_back
#define ff first
#define ss second
#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll n;
bool cal(ll k){
    ll a,temp;
    a = 0;
    temp = n;
    while(1){
        temp -= k;
        if(temp<0){
            a += k+temp;
            break;
        }
        a += k;
        temp -= temp/10;
        if(temp<0)break;
    }
    if( a*2 >= n )return true;
    return false;
}

int main(int argc, char const *argv[]) {
    cin>>n;
    ll l,r,mid;
    l = 1;
    r = n;
    while(l<=r){
        mid = (l+r)/2;
        if(!cal(mid))l = mid+1;
        else r = mid-1;

    }
    cout<<l<<endl;
    return 0;
}
