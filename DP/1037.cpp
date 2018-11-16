#include <iostream>
#include <algorithm>
using namespace std;
int MAX=-100,O,Z,I,J,a;
int arr[110];
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                if(arr[k])O++;
                else Z++;
            }
            if(Z-O>MAX){
                I=i;J=j;
                MAX=Z-O;
            }
            O=0;Z=0;
        }
    }
    for(int i=I;i<=J;i++)if(arr[i])a++;
    for(int i=0;i<I;i++)if(arr[i])a++;
    for(int i=J+1;i<n;i++)if(arr[i])a++;
    cout<<MAX+a<<endl;
    
    return 0;
}