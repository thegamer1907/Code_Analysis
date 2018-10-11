#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n ,t;
    cin>>n>>t;
    
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int left =0 , right=0 , count=0,curr=arr[0] ;
    
    while(1){
        
        if (left > right){right++;curr+=arr[right];continue;}
        if(curr <= t){count = max(count , right-left+1); right++;curr+=arr[right];}
        if(curr > t){curr -=arr[left];left++;}
        if (left >= n || right >= n)break;   
           
    }
    
    cout<<count;
    
         
	return 0;
}