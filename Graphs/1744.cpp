#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<map>
#include<math.h>
#include<stdlib.h>
#include<vector>
typedef long long ll;
using namespace std;

int main() {
    
    int n,k;
    
    cin >> n >> k;
    
    int ar[n+5];
    
    for(int i = 1;i<n;i++){
        
        cin >> ar[i];
    }
    
    for(int i=1;i<=n;i=i+ar[i]){
        
        
        
        if(i==k){
            
            cout << "YES";
            return 0;
        }
        
        if(i==n){
            break;
        }
        
    }
    
    cout << "NO";
  
    
}


