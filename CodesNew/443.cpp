#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>> n >> t){
        int arr[n],ans=0,x,y;
        for(int a=0;a<n;a++){
            cin>> arr[a];
            if(a) arr[a]+=arr[a-1];
        }
        for(int a=0;a<n;a++){
            y=a?arr[a-1]:0;
            x=upper_bound(arr,arr+n,t+y)-arr;
            ans=max(ans,x-a);
        }
        cout<< ans <<endl;
    }
    return 0;
}