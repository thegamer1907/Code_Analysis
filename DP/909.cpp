#include<iostream>
#include<climits>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int count=0;
            for(int k=0;k<n;k++){
                if(k>=i && k<=j){
                    if(arr[k]==0) {
                        count++;
                    }
                }
                else if(arr[k]==1){
                    count++;
                }
            }
            if(count > mx){
                mx=count;
            }
        }
    }
  cout << mx << endl;
}