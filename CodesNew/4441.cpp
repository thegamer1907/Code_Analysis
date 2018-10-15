#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string arr[n+1];
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
           // cout << arr[i] << " " << arr[i+1] << endl;
            for(int j=0;j<arr[i].length();j++){
                if(arr[i][j]>arr[i+1][j])
                    arr[i].resize(j);
            }
            
        }
    }
    
    for(int i=0;i<n;i++)
        cout <<  arr[i] << endl;
}