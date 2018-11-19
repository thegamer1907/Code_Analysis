#include<bits/stdc++.h>
using namespace std;

int n,k;
map<int,int> mp;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int tmp=0;
        for(int j=0;j<k;j++)
        {
            int a;
            scanf("%d",&a);
            tmp+=(a<<(k-j-1));
        }
        mp[tmp]=1;
    }
//    for(int i=0;i<16;i++)
//        if(mp.count(i)) cout<<i<<endl;
    int flag=0;
    for(int i=0;i<16;i++)
    {
        if(!mp.count(i)) continue;
        for(int j=i+1;j<16;j++)
        {
            if(!mp.count(j)) continue;
            if((i&j)==0) {flag=1;break;}
        }
    }
    if(mp.count(0)) flag=1;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}