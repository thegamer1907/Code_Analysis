#include "bits/stdc++.h"
using namespace std;

#define  F  first
#define  S  second
#define  pb push_back
#define  mp make_pair
#define  all(x) (x).begin(),(x).end()
typedef long long int ll;
const int N = 1e6+5;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k;cin>>k;
    string s;cin>>s;
    int sz = s.size();
    vector<int>vec;
    ll Res = 0;
    for(int i=0;i<sz;i++)
        if(s[i]=='1')vec.pb(i);
    if(!k)
    {
        ll Cnt = 0;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='0')Cnt++;
            else Res+=(Cnt*(Cnt+1)/2),Cnt=0;
        }
        if(Cnt)Res+=(Cnt*(Cnt+1)/2);
        cout<<Res<< "\n";
        exit(0);
    }
    sz = vec.size();
    for(int i=0;i<sz;i++)
    {
        if(i+k>sz)break;
        int a,b;
        if(i+k==sz)a=s.size()-vec[i+k-1];
        else a=vec[i+k]-vec[i+k-1];
        if(i==0)b=vec[0]+1;
        else b=vec[i]-vec[i-1];
        Res += (ll)a*b;
    }
    cout<<Res<< "\n";







    return 0;
}
