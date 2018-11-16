#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int suma=0,sumb=0,sumc=0;
    for(int i=0;i<a;i++){
        int a,b,c;
        cin>>a>>b>>c;
        suma=suma+a;
        sumb=sumb+b;
        sumc=sumc+c;
    }
    if (suma==0&&sumb==0&&sumc==0){
        cout<<"YES";
    }
    else 
    cout<<"NO";
   
}