#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n, k; cin >> n >> k;
    long long arr[n];
    map<long long,long long>mp2,mp3;
    for( int i = 0 ; i < n ; ++i ){
        cin >> arr[i];
    }
    long long ans = 0;
    for( int i = n-1 ; i >= 0 ; i-- ){
        ans+=mp2[arr[i]*k];
        mp2[arr[i]]+=mp3[arr[i]*k];
        mp3[arr[i]]++;
    }
    cout << ans << '\n';
}
