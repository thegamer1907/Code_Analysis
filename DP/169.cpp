#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int * arr=(int *)malloc(sizeof(int)*n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int *arr1=(int *)malloc(sizeof(int)*m);
    for(int i=0;i<m;i++){
     cin>>arr1[i];   
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    int i=n-1,j=m-1,count=0;
    while(i!=-1 &&j!=-1){
        if(abs(arr[i]-arr1[j])<=1){
            i--;
            j--;
            count++;
        }
        else if(arr[i]>arr1[j])i--;
        else if(arr[i]<arr1[j])j--;
    }
    cout<<count;
}