#include <bits/stdc++.h>

using namespace std;
#define v vector
typedef long long ll;
ll mm;
bool sePuede(ll sanguches, ll a, ll b, ll c, ll a1, ll b1, ll c1, ll a2, ll b2, ll c2){
    ll necesitoa=sanguches*a;
    ll necesitob=sanguches*b;
    ll necesitoc=sanguches*c;
    ll money=mm;
    if (necesitoa>a1){
        money-=(a2*(necesitoa-a1));
    }
    if (necesitob>b1){
        money-=(b2*(necesitob-b1));
    }
    if (necesitoc>c1){
        money-=(c2*(necesitoc-c1));
    }
    if (money<0)
        return 0;
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string A;
    cin >> A;
    ll a=0, b=0, c=0;
    for (int i=0;i<A.size();i++){
        if (A[i]=='B'){
            a++;
        }
        else if (A[i]=='S'){
            b++;
        }
        else
            c++;
    }
    ll a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    ll a2, b2, c2;
    cin >> a2 >> b2 >> c2;
    ll cant=0;
    cin >> mm;
    ll left=0, right=1e14;
    for (ll m=(left+right)/2;left!=right;m=(left+right)/2){
        if (sePuede(m, a, b, c, a1, b1, c1, a2, b2, c2))
            left=m+1;
        else
            right=m;
    }
    if (left>0)
        left--;
    cout << left << "\n";
}
