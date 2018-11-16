#include <bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}
int max(int a,int b){
    if(a<b){
        return b;
    }
    return a;
}


int hcf(int a,int b){
    if(b%a==0){
        return a;
    }
    else{
        return hcf(b%a,a);
    }
}


int main() {
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0){
            continue;
        }
        else{
            cout << i;
            return 0;
        }
    }
    cout << n;
    
    
    
    
    
    
    
   
    
}
