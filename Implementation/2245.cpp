#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i , l , r) for(int i=l; i < r; i++)

using namespace std;

int main(){
    fastio
    ll w , k , n;
    cin >> k >> n >> w;
    ll val = (k*((w*(w+1))/2)-n);
    cout << std::max(0ll , val) << "\n";
    return 0;
}