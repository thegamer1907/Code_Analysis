#include <iostream>
#include <algorithm>
using namespace std;
int l,r,sum,ans,arr[100000];
int main() {
    
    int n,t;
    cin >> n>>t; 
   
    for (int i=0;i<n;i++)
    cin >> arr[i];
    while (r<n){
        sum+=arr[r];
        if (sum<=t)ans= max(ans,(r-l+1));
        while(sum>t)
        {sum-=arr[l];
        l++;}
        r++;
         }
        cout << ans<<endl; 
    
    
    return 0;
}
    