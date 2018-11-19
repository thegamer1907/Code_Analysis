
#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define pii pair<int,int>
#define MAX 20000 

bool B[MAX];

int main(){

    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    a= (a*5)%60 ;
    if(b>0 || c>0)a++; 
    x=(x*5)%60;
    y= (y*5)%60;
    if(c>0){
        if(b%5==0)b++;
    }

    int i=x;
    while(1){
        if(i==b)break;
        if(i==c)break;
        if(i==a)break;
        if(i==y){
            cout<<"YES\n";
            return 0; 
        }
        i= (i+1)%60;
    }
    int j=x;
    while(1){
        if(j==b)break;
        if(j==c)break;
        if(j==a)break;
        if(j==y){
            cout<<"YES\n";
            return 0; 
        }
        j= (j-1<0)?59:j-1;
    }
        

    cout<<"NO\n";

    


    return 0;
}