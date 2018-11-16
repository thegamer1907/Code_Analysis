#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    sort(ar,ar+n);
    int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++) scanf("%d",&arr[i]);
    sort(arr,arr+m);
    
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(arr[j]-ar[i])<=1){
                k++;
                arr[j]=-8;
                break;
            }
        }
    }
    cout<<k;
    return 0;
}