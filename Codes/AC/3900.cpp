#include <bits/stdc++.h>
#include <string>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
#define mp make_pair
#define NUM 200000
#define abs 1e-10
#define vi vector <int>
#define fastio std::ios::sync_with_stdio(false)

ll bc=0,cc=0,sc=0;
ll nb,nc,ns;
ll pb,pc,ps;
ll r;

ll Calc( ll n)
{
    ll ans=0;
    if(n*bc > nb)ans+= (n*bc - nb)*pb;
    if(n*sc > ns)ans+= (n*sc - ns)*ps;
    if(n*cc > nc)ans+= (n*cc - nc)*pc;

    return ans;
}


int  main()
{
    std::ios::sync_with_stdio(false);

    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')bc++;
        else if(s[i]=='C')cc++;
        else sc++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    ll mx=max(nb,nc);
    mx=max(mx,ns);

    ll beg=0,en=2*r+mx,mid;
    while(beg<en)
    {
        mid =(beg+en)/2;

        //cout<<beg<<" "<<en<<" "<<mid<<" "<<Calc(mid)<<endl;

        if(Calc(mid)>r)en=mid;
        else beg=mid+1;
    }

    if(Calc(mid)>r)mid--;
    cout<<mid<<endl;
}


