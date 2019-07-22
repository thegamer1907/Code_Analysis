#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum=0;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(n==1){
        if(arr[0]%2){
            cout<<"sjfnb";
        }
        else{
            cout<<"cslnb";
        }
        return 0;
    }
    sort(arr,arr+n);
    bool tmp=arr[0]==arr[1];
    if(arr[1]==0){
        cout<<"cslnb";
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]){
            if(tmp||arr[i-1]==arr[i-2]+1){
                cout<<"cslnb";
                return 0;
            }
            tmp=true;
        }
        if(arr[i]==arr[i-1]&&arr[i-1]==arr[i-2])
        {
            cout<<"cslnb";
            return 0;
        }
    }
    sum-=n*(n-1)/2;
    if(sum%2){
        cout<<"sjfnb";
    }
    else
        cout<<"cslnb";
    return 0;
}