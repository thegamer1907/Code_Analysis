#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long n,maxx,sum,num;
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
        maxx=max(num,maxx);
    }
    sum=ceil(double(sum)/(n-1));
    int ans=max(sum,maxx);
    cout<<ans;
    return 0;
}