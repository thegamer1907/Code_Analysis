#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    string s;
    cin>>n>>k>>s;
    int l=0,r=0,ats=0;
    int cnt[256]={};

    while(1)
    {
        if(r<s.size() && s[r]=='a' && (cnt['b'] <= k || cnt['a']+1 <=k))
        {
            cnt[s[r]]++;
            r++;
            ats=max(ats,r-l);
        }
        else if(r<s.size() && s[r]=='b' && (cnt['b']+1 <= k || cnt['a'] <=k))
        {
            cnt[s[r]]++;
            r++;
            ats=max(ats,r-l);
        }
        else if(l<s.size())
        {
            cnt[s[l]]--;
            l++;
        }
        else break;
    }
    cout<<ats;
}


