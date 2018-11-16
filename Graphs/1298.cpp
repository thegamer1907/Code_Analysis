#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n,t;
    cin>>n>>t;

    vector<int> arr(n);
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }

    int pos=1;
    for(int i=1;i<n;i++){
        pos = pos + arr[pos];
        if(pos==t){
            cout<<"YES";
            return 0;
        }
        if(pos>t){
            cout<<"NO";
            return 0;
        }

    }
    cout<<"NO";
    return 0;
}