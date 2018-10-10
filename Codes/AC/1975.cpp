#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define F first
#define S second
typedef pair<int,int>ii;
typedef pair<ii,int>state;
typedef pair<vector<int>,int>vii;
const int N=200005;


map<ll,ll>l,r;
ll n,arr[N],k;
int main()
{
   //freopen("test.in","r",stdin);
   scanf("%I64d%I64d",&n,&k);
   for(int i=0;i<n;i++)scanf("%I64d",&arr[i]),r[arr[i]]++;
   ll sol=0;
   for(int i=0;i<n;i++){
    r[arr[i]]--;
    if(arr[i]%k==0)
       sol+=l[arr[i]/k]*r[arr[i]*k];
    l[arr[i]]++;
   }
   cout<<sol;
   return 0;
}
