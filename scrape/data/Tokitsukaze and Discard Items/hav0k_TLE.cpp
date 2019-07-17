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
    ll arr[m];
    for (ll i=0;i<m;i++){
    	cin>>arr[i];
    }
    if (arr[m-1]<k){
    	cout<<1<<"\n";
    }
    else{
    	ll count=0,MIN=1,MAX=k;
    	ll pointer =0;
    	while (pointer<m){
    		ll S = MAX;
            ll p = 0;
            ll q = pointer;
    		for (ll i=pointer;i<m;i++){
    			if (arr[i]<=MAX && arr[i]>=MIN){
    				pointer++;
    				S++;
    			}
    			else if (i==q){

    				MIN=MAX+1;
                    p = 1;
    				MAX=MAX+k;
                    
                    count--;
    				break;
    			}
                else{
                    break;
                }
    		}
            if (p!=1){
                MAX=S;  
            }
            count++;    		
    	}
    	cout<<count<<"\n";
    }
    return 0;
}