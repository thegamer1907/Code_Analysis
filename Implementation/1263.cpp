#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;

    cin>>n;
    cin>>t;
    char a[n];
    cin>>a;

    for(int i=1;i<=t;i++){
        int x = 0;
        while(x+1<n){
        if(a[x]=='B' && a[x+1]=='G'){
            char temp=a[x];
            a[x]=a[x+1];
            a[x+1]=temp;
            x+=2;
        }
        else{
            x++;
        }

        }
    }
    cout << a;
}
