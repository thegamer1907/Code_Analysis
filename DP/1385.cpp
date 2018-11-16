#include<bits/stdc++.h>
using namespace std;
#define MOD 100000007
#define get(n) scanf("%d", &n)
#define getll(n) scanf("%ld", &n)
#define out(n) printf("%d", n)
#define outll(n) printf("%ld", n)
#define loop(n) for(int i=0; i<n; i++)
#define MAXX 1001
#define mem(x, y) memset(x, y, sizeof(x))
#define loop1(n) for(int i=1; i<=n; i++)
#define ll long long
#define pb push_back
#define pi acos(-1)

int main()
{
int n;
cin>>n;
int a[n];
int sum=0,mx=0;
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
}
if(sum==n){
    cout<<sum-1<<endl;
    return 0;
}
int cnt=0;
for(int i=0;i<n;i++){
      if(a[i]==0)cnt++;
      if(a[i]==1&&cnt>0)cnt--;
      if(a[i]==1&&cnt==0)continue;
 mx=max(mx,cnt);
    }
    cout<<mx+sum<<endl;

return 0;
}
