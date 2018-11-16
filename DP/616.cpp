#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=s.length();
    int arr[x];
    for(int i=0;i<x-1;i++){
        if(s[i]==s[i+1]) arr[i+1]=arr[i]+1;
        else arr[i+1]=arr[i];
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",arr[b-1]-arr[a-1]);
    }
    return 0;
}