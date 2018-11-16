#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll height[100000];
ll rite[100000];
ll cnt=1;
void solve(int x)
{
    if(x<1)
        return;
    if(x==1)
    {
        if(rite[0]>=height[1])
        { cnt++;}
        else if(rite[1]>=height[1])
        { cnt++; rite[1]-=height[1];}
        
    }
    else
    {
        solve(x-1);
        if(rite[x-1]>=height[x])
        { cnt++;}
        else if(rite[x]>=height[x])
        {rite[x]-=height[x]; cnt++;}
    }
}
            

int main()
{
    //memset(rite,0,sizeof(rite));
    int n;
    cin>>n;
    ll coordinates[n];
    for(int i=0;i<n;i++)
        cin>>coordinates[i]>>height[i];
    for(int i=0;i<n-1;i++)
        rite[i]=coordinates[i+1]-coordinates[i]-1;
  //  for(int i=0;i<n-1;i++)
    //    cout<<rite[i]<<" ";
    solve(n-2);
    //cout<<endl;
    if(n>1) cnt++;
    cout<<cnt;
    
    return 0;
}