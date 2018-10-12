#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

int main()
{
    ios::sync_with_stdio(0);
    int k;
    string s;
    cin>>k>>s;
    if(s.find("1")==-1 && k==0)return cout<<(ll)s.size()*(s.size()+1LL)/2LL,0;
    if(s.find("1")==-1)return cout<<0,0;
    vector<int>A;
    for(int i=0; i<s.size(); i++)
        if(s[i]=='1')A.push_back(i);

    ll ats = 0;

    if(k)
    for(int i=max(k-1,0); i<A.size(); i++)
    {
        ll L = (i==k-1 ? A[0] : A[i-k+1] - A[i-(k)]-1);
        ll R = (i+1==A.size() ? s.size()-A.back()-1 : A[i+1]-A[i]-1);
        ats+=(L+1)*(R+1);
        //cout<<i<<" "<<L<<" "<<R<<"\n";
    }

    if(k==0)
    {
        vector<int>Z;
        Z.push_back(A[0]);
        for(int i=1; i<A.size(); i++)
        Z.push_back(A[i]-A[i-1]-1);
        Z.push_back(s.size()-A.back()-1);

        for(int i=0; i<Z.size(); i++)
            ats+=(ll)Z[i]*(Z[i]+1LL)/2LL;
    }
    cout<<ats;
}
