/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n , m , k ;
     cin>>n>>m>>k;
    long long  ar[m];
    long long  a=0;
    long long ramdenit = 1 ; 
    long long sad = 0 ;
    long long result = 0 ;
   
    for(int i = 0 ; i<m ; i++){
        long long v;cin>>v;
        ar[i]=v;
    }
    while(true){
         if(a==m)break;
        long long curr = ar[a];
        a++;
        result++;
          if(a==m)break;
        if(curr%k!=ramdenit){
            if(curr%k>ramdenit){
            curr=curr+k-curr%k+ramdenit;
            }else{
                curr=curr+ramdenit-curr%k;
            }
        }else{
            curr+=k;
        }
        
        while(ar[a]<curr){
            a++;
            ramdenit=(ramdenit+1)%k;
            if(a==m)break;
            
        }
        ramdenit=(ramdenit+1)%k;
        
        
        
        
    }
    
    
 cout<<result;
    return 0;
}