#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    int max_k=maxi+m;
    while(m>0){
        sort(arr.begin(),arr.end());
        int temp=arr[n-1]-arr[0];
        if(temp==0){
            temp=1;
        }
        m=m-(temp);
        arr[0]=arr[0]+temp;
    }
    int min_k=INT_MIN;
     for(int i=0;i<arr.size();i++){
        if(min_k<arr[i]){
            min_k=arr[i];
        }
    }
    cout<<min_k<<" "<<max_k<<endl;
}
