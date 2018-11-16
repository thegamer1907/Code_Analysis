#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int a,b;
    cin>>n;
    cin>>a>>b;
    int cnt=0;
    n=(n+1)/2;
    while (!(abs(b-a)==1&&min(a,b)%2==1)){
        a=(a+1)/2;
        b=(b+1)/2;
        n=(n+1)/2;
        cnt++;
    }
    if (n==1){
        cout<<"Final!";
        return 0;
    }else{
        cout<<cnt+1;
        return 0;
    }
}
