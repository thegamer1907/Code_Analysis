#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,m,k,i,t,j,c=0;
    cin>>n>>m>>k;
    ll a[m];
    for(i=0;i<m;++i)
        cin>>a[i];
    t=k;    j=0;
    for(i=0;i<m;)
    {
        //cout<<a[i]<<" "<<k<<" "<<j<<" "<<c<<endl;
        while(a[i]<=k)
        {
            ++j;    ++i;
        }
        if(j>0)
        {
             k+=j;  ++c;    j=0;
        }
        else
        {
            if(t*(ceil((a[i]-k)/t))>0)
                k+=t*(ceil((a[i]-k)/t));
            else
                k+=t;
        }
        //cout<<a[i]<<" "<<k<<" "<<j<<" "<<c<<endl;
    }
    cout<<c;
    
	return 0;
}