#include<bits/stdc++.h>
using namespace std;


int main() {
int n,m,l ;
cin>>n>>m ;
set<int>se ;
int arr[n] ;
for(int i=0 ;i<n ;i++)
    cin>>arr[i] ;
for(int i=n-1 ;i>=0 ;i--){
    se.insert(arr[i]) ;
    arr[i]=se.size() ;
}
while(m--){
        cin>>l ;
     cout<<arr[l-1]<<"\n" ;
}
	return 0;
}
