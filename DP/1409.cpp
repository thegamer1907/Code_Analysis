#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    
    int n ;
    cin>>n;
    int count =0;
    ll ar[n];
    for(int  i=0;i<n;i++) {cin>>ar[i];
    if(ar[i] == 1){
        ar[i] = -1;
        count ++;
    }
    else{
        ar[i] = 1;
    }
    }
    
    int ans = ar[0] ,sum_here = ar[0];
    for(int i=1;i<n;i++){
        
        
        sum_here = max(sum_here + ar[i] ,ar[i]);
        ans = max(ans , sum_here);
        
    }
    cout<<ans + count<<endl;
    
    
    
    
}