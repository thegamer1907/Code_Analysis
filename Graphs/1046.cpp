#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<algorithm>
#include<stack>
#define N 200000
#include<math.h>
#include<queue>
#include<vector>
#define ll long long
#define inf   20
#define maxn 200010
#define mod 347
using namespace std;
int n,k;
int arr[maxn];
int yes=0;
void dfs(int ind){
if(ind+1==k){
     yes=1;
    cout<<"YES\n";
    return ;
}
if(ind+1>k){
    return ;
}
dfs(ind+arr[ind]);
}
int main(){
//freopen("input2.txt","r",stdin);
cin>>n>>k;
for(int i=0;i<n-1;i++){
    cin>>arr[i];
}
dfs(0);
if(yes!=1)
cout<<"NO\n";
return 0;
}
