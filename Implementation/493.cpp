#include <iostream>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    int m=k-1 , cnt = 0;

    for(int i=0 ; i<=m ; i++){

        if(a[i] > 0){
            cnt++;
        }
    }
    for(int i=k ; a[i] == a[i-1]; i++)
        if(a[i] > 0)
            cnt++;


    cout<<cnt;

    return 0;
}
