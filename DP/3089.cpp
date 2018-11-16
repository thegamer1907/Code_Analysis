#include <bits/stdc++.h>
using namespace std;
#define oo 666666666
#define ll long long
#define ld long double

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int>SPF(5000001),ats(5000001);
    for(int i=0; i<SPF.size(); i++)
        SPF[i]=i;

    for(int i=2; i*i<SPF.size(); i++)
        if(SPF[i]==i)
        for(int j=2*i; j<SPF.size(); j+=i)
        if(SPF[j]==j)SPF[j]=i;

    for(int i=2; i<ats.size(); i++)
    {
        ats[i]+=ats[i-1];
        int x = i;
        while(x != 1)
        {
            x/=SPF[x];
            ats[i]++;
        }
    }

    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<ats[a]-ats[b]<<"\n";
    }
}
