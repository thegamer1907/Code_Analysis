#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,i,j,k,count=0;
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++){cin>>arr1[i];}

    cin>>m;
    int arr2[m];
    for(i=0;i<m;i++){cin>>arr2[i];}    

    sort(arr1 , arr1+n);
    sort(arr2 , arr2+m);

    k=-1;

    for(i=0;i<n;i++){

        for(j=k+1;j<m;j++){
            if(abs(arr1[i]-arr2[j])<=1){k=j; count++;  break;}
        }

    }

    cout<<count;
    return 0;

}