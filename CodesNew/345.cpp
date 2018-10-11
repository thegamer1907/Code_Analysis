#include <cstdio>
#include<iostream>
#include <cmath>
using namespace std;
 int a[100005];
int main(){
    int n,t,i,pos=0,sum=0,k=0,mx=0;
    cin>>n>>t;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        sum+=a[i];
        while(sum>t){
            sum-=a[pos];
            pos++;
        }
        if(k<=i-pos+1)
            k=i-pos+1;

    }
    cout<<k<<endl;
    return 0;
}
