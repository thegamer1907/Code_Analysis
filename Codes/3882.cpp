#include<bits/stdc++.h>
using namespace std;
//0-------------------------------------------5*1e8-------------------------------------------1e9
map<char,int> mp;
int main()
{
    long long int  n,low=0,high=1e15,count=0,nb,ns,nc,pb,ps,pc,mid,money;
    string s;
    cin>>s;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>money;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;
    while(low+1<high)
    {
        count=0;
        mid=(low+high)/2;
        if(mid*mp['B']-nb>0)
        count+=(mid*mp['B']-nb)*pb;
        if(mid*mp['S']-ns>0)
        count+=(mid*mp['S']-ns)*ps;
        if(mid*mp['C']-nc>0)
        count+=(mid*mp['C']-nc)*pc;
        if(count<=money)
            low=mid;
        else
            high=mid;
    }
    cout<<low;
}
