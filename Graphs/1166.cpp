#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,t,x;
    cin>>n>>t;

    int arr[n-1];

    for(int i=1;i<n;i++){
        cin>>x;
        arr[i] = i+x;
    }

    int curr_location=1;
    bool canReach = false;

    while(curr_location<n){
        curr_location = arr[curr_location];
        if(curr_location == t){
            canReach = true;
            break;
        }
    }
    if(canReach == true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
