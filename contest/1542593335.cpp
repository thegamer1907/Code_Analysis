#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    char a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int f1=0,f2=0;
    while(n--){
        char m,n;
        cin>>m>>n;
        if(m==a&&n==b){
            cout<<"YES\n";
            return 0;
        }
        if(n==a)
            f1=1;
        if(m==b)
            f2=1;
    }
    if(f1==1&&f2==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

