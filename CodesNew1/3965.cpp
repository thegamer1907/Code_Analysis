#include <bits/stdc++.h>
using namespace std;

#define clr(i, j)     memset(i, j, sizeof(i))
#define pb            push_back
#define mp            make_pair
typedef long long     ll;



int main()
{
   vector<ll>s; int n,k;cin>>n>>k;int arr[20000];
    for(int i=0;i<n;i++){
       ll a,b;cin>>a;
s.push_back(a);

        if(i){s[i]+=s[i-1];}
    }ll sum=0;
 for(int i=0;i<k;i++){
       ll l;
        cin>>l;sum+=l;
 int d=upper_bound(s.begin(),s.end(),sum)-s.begin()-1;
 if(d==n-1){cout<<n;sum=0;}else{cout<<n-(d+1);}

cout<<endl;
    }

}
