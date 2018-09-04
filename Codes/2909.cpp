#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef map<int,int> mi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

string s;
int z[1000005];
int occ[1000005];
int occ2[1000005];
int check[1000005];

int main()
{
    cin >> s;
    int cnt(0);
    for(int i=1,l=0,r=0;i<s.size();++i)
    {
        if(i<=r) z[i]= min(z[i-l],r-i+1);
        occ2[z[i]]++;
        while(i+z[i]<s.size() && s[z[i]] == s[i+z[i]]) ++z[i],++occ[z[i]];
        if(i+z[i]>=s.size())
        {
           if(!check[z[i]]) cnt++,check[z[i]]=1;
        }
        if(i+z[i]-1>r) l = i , r = i + z[i] - 1;
    }

    for(int j=s.size();j>0;--j) occ[j]+=occ2[j],occ2[j-1]+=occ2[j];

    for(int i=s.size();i>0;--i)
    {
        if(check[i] && occ[i]>=2)
        {
            cout << s.substr(0,i) ;
            return 0;
        }
    }
    cout << "Just a legend";


}
