#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, mx=0 , total=0;
cin>>n ;
int arr[n];
for(int i = 0 ; i<n ; i++){
    cin>>arr[i];
    if (arr[i]==1)
        total++;
}
if (total == n )
    total --;
for(int i = 0 ; i< n; i++){
            int dif =0;
    for(int j=i;j<n;j++){
        if (arr[j]==0){
            dif++;
        }
        else {
            dif--;
        }
        if (dif>mx){
            mx=dif;
        }
    }
}
cout<<total+mx;
    return 0 ;
}
