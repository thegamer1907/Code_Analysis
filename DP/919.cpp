#include <bits/stdc++.h>
using namespace std;
int n , ans ;
int a[101];
 
 
int main(){
 
cin>>n;
for(int i=1;i<=n;i++)cin>>a[i];
 
for(int l=1;l<=n;l++){
for(int r=l;r<=n;r++){
 
int cnt=0;
for(int i=1;i<=n;i++){
 
    if( i<l || i>r )
        if( a[i]==1 )
            cnt++;
    if( l<=i&&i<=r )
        if( a[i]==0 )
            cnt++;
}
ans=max( ans , cnt );
}
}
cout<<ans<<endl;
return 0;
}