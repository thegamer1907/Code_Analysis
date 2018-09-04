#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
bool isok(int x)
{
    int sum=0;
    while(x){
        sum+=x%10;x/=10;
        if(sum>10)return false;
    }
    if(sum==10)return true;
    return false;
}
int main()
{
    int k,i,j,cnt=0;
    cin>>k;
    for(i=1;cnt<=k;i++){
        if(isok(i))cnt++;
        if(cnt==k)break;
    }
    cout<<i<<endl;

    return 0;
}