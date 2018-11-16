#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
int flag=0;
void fun(int *a,int n,int c,int t){
    if(flag==1)return;
    if(c==t){
        flag=1;
    }
    if(c>t)return;
    fun(a,n,c+a[c-1],t);
}
int main()
{
    int n,t;cin>>n>>t;
    int a[1000000],b[100001]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fun(a,n,1,t);
    if(flag==1)cout<<"YES";
    else cout<<"NO";
}