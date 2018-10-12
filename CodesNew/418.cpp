#include <iostream>

using namespace std;
int a[100100];
int main() {
    int n , t;
    cin >> n >> t;
    for(int  i=0 ; i<n ; i++){
        cin>>a[i]; 
    }
    
    int l =0 , r =0 ; 
    int sum = 0  , ans =0 ; 
    while( l< n ){
        sum+=a[r] ; 
        if (sum <=t ){
            ans = max ( ans , ( r-l+1)) ; 
            
        }
        while(sum > t){
            sum-=a[l];
            l++;
        }
        if(r<n-1)
        r++;
    }
    cout<<ans;
    return 0;
}