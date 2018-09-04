#include<iostream>
#include<cstdio>

using namespace std;
typedef long long ll;

int k;

int check(ll n){
    int ct = 0;
    while(n > 0){
        ct += n % 10;
        n /= 10;
    }
    return ct;
}
ll solve(){
    ll n = 0, i = 0;
    do{
        n += 10;
        i += (check(n) <= 10);
    }while(i < k);
    return n + 10 - check(n);
}
int main(){
    cin >> k;
    cout << solve() << endl;
    return 0;
}