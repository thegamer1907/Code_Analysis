#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    int a;
    cin>>a;
    int arr1[a];
    for(int i=0;i<a;i++){cin>>arr1[i];}
    int b;
    cin>>b;
    int arr2[b];
    for(int i=0;i<b;i++){cin>>arr2[i];}
    int i=0,j=0;
    sort(arr1,arr1+a);
    sort(arr2,arr2+b);int sum=0;int z=j;
    while(i<=a-1){
        if( abs(arr1[i]-arr2[j])<=1){
            sum+=1;
            i+=1;j+=1;z=j;
        }
        else if(j<b-1){
            j++;
            
        }
        else if(j>=b-1){
            j=z;
            i+=1;
        }
      
        
    }
    cout<<sum<<endl;
    
    
    
}