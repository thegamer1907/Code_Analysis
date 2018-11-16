#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ans=0, count=0, max=-1;
    
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1){
            count++;
            //ans--;
        }
    }
    if(count == n){cout<<n-1<<endl;return 0;}
    
    for(i=0;i<n;i++){
        if(a[i]==1)
            ans--;
        else
            ans++;
        
        if(ans==-1)ans=0;
        
        if(ans > max)
            max = ans;
    }
    cout<<count+max;
    return 0;
}