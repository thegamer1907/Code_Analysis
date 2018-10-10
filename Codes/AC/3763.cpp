#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<unordered_map>
#include<map>
#include<cmath>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;
#define inf 1000003
#define x first
#define y second
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#include<set>
#include<cmath>
#include<stack>
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll A[3], B[3], P[3], cnt;

ll check(ll x){
    return cnt - (max(1LL*0, A[0]*x - B[0] )*P[0] + max(1LL*0, A[1]*x - B[1] )*P[1] + max(1LL*0, A[2]*x - B[2] )*P[2] ) >= 0;
}

ll b_search(ll low, ll high)
{
    ll mid= (low+high)/2;
    while(low < high-1){
        if(check(mid))
            low= mid;
        else high= mid-1;
        mid= (low+high)/2;
    }
    if(check(high)) return high;
    return low;
}

int main()
{
//    ios
    string s;
    cin>>s;
    ll i, j, k, n;
    for(i=0; i<s.length(); i++){
        if(s[i]=='B')A[0]++;
        else if(s[i]=='S') A[1]++;
        else A[2]++;
    }
    for(i=0; i<3; i++) cin>>B[i];
    for(i=0; i<3; i++) cin>>P[i];
    cin>>cnt;
    cout<<b_search(0, 100000000000000);
}
