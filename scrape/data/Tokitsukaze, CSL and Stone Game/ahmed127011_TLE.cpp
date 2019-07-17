#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
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
    int min=1;
    bool t=true;
    if(arr[0]%2)t=false;
    else t=true;
    bool tmp=arr[0]==arr[1];
    if(arr[1]==0){
            cout<<"cslnb";
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]==arr[i-1]){
            if(tmp){
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
    arr[0]=0;

    while(min<n){
            while(min<n&&arr[min]==arr[min-1]+1)
                min++;
                if(min==n){
                        t=!t;
                    break;
                }
            arr[min]--;
            t=!t;
    }
    if(!t){
        cout<<"cslnb";
    }
    else
        cout<<"sjfnb";




    return 0;
}