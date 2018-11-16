//AUTHOR::ASHUTOSH MOUDGIL
#include<iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define F(i,c,n) for(int i=0;i<n;i++)
#include<algorithm>
int main(){
IOS;
int n,k;
cin>>n>>k;
int * arr=new int [n];
F(i,0,n){
cin>>arr[i];
}
int val=0;
int i=k-1;
for(;i>=0;i--){
    if(arr[i]>=arr[k-1]&&arr[i]>0)
        val++;
}
for(i=k;(arr[i]==arr[k-1]&&arr[i]>0)&&i<n;i++)
    val++;
cout<<val<<endl;
return 0;
}
