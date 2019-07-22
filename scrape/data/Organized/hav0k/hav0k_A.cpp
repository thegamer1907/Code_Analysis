/*input
13 4 5
7 8 9 10

*/
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m]={0};
    for (ll i=0;i<m;i++){
    	cin>>arr[i];
        arr[i]--;
    }
	ll count=0,rm=0;
	ll pointer =0;
	while (pointer<m){
		ll val = 1;
        for (ll i=pointer+1;i<m;i++){
			if ((arr[pointer]-rm)/k == (arr[i]-rm)/k){
				val++;
			}
            else break;
		}
        rm+=val;
        pointer+=val;
        count++;
    }
	cout<<count<<"\n";
    return 0;
}