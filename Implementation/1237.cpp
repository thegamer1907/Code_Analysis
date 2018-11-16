#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n,t,x;
    scanf("%d",&n);
    scanf("%d",&t);
    string a;
    cin>>a;
    for(int i=0;i<t;++i){
        x=++n;
        while(x--){
            if(a[x]=='G'&&a[x-1]=='B'){
                a[x--]='B';
                a[x]='G';
            }
        }
    }
    cout<<a;
    return 0;
}
