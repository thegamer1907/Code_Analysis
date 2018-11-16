#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    while(k--){
        for(int i=0;i<n-1;){
            if(a[i]=='B' && a[i+1]=='G'){
                a[i] = 'G';
                a[i+1] = 'B';
                i+=2;
            }
            else{
                i++;
            }
        }
    }
    cout<<a<<"\n";
    return 0;
}
