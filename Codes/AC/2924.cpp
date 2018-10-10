#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef map<int,int> mi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

string s;
int pf[1000005];
int occ[1000005];

void pfInit()
{
    for(int i=1;i<s.size();i++)
    {
        int j = pf[i-1];
        while(j>0 && s[i]!=s[j]) j=pf[j-1];
        if(s[i]==s[j]) ++j;
        pf[i]=j;
    }
}

int main()
{
    cin >> s;
    pfInit();
    for(int i=0;i<s.size();++i) ++occ[pf[i]];
    for(int i=s.size()-1;i>0;--i) occ[pf[i-1]]+=occ[i];
    int j = pf[s.size()-1];
    while(j>0)
    {
        if(occ[j]>1) break;
        j=pf[j-1];
    }
    if(j==0) cout << "Just a legend";
    else cout << s.substr(0,j);
}
