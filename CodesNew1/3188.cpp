#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
typedef pair<int,int>ii;
typedef pair<vector<int>,int>vii;
const int N=100005;

int main()
{
    //freopen("test.in","r",stdin);
    int n,k;
    scanf("%d%d",&n,&k);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int zeros=0,s=0,mx=0,x=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)zeros++;
        while(zeros>k){
            zeros-=a[s]==0;
            s++;
        }
        if(i-s+1>=mx){
              mx=i-s+1;
              x=s;
        }
    }
    for(int i=x;i<x+mx;i++)a[i]=1;
    cout<<mx<<endl;
    for(int i=0;i<n;i++)cout<<a[i]<<' ';
    return 0;
}

