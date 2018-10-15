#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int main(){


int n,cot=0,flag=0;
    cin>>n;
   
  int b[n];
    
    for(int i=0;i<n;i++){
        cin>>b[i];
   }
  sort(b,b+n,greater<int>());//j
    int j=n/2;
    for(int i=0;i<n/2;i++){
        
        while(2*b[j]>b[i]){
            
            if(j==n-1){
                flag =1;
                    break;}
            j++;
            
      }
        if(flag==0)
        cot++;
       
  //    cout<< b[i]<<" => "<<b[j]<<endl;
        if(j==n-1)break;
        j++;
        
      
    }
    
cout<<n-cot;

     return 0;
}