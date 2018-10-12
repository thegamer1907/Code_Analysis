#include<bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define lng length

typedef long long lli;
typedef pair<int, int> pii;
typedef pair<lli, lli> pll;

const int N=2e5+5;
int n, q;
lli tab[N], ar[N], k=0;

int binsearch(lli x)
{
    int pocz=1, kon=n;
    while(pocz<kon)
    {
        int akt=(pocz+kon+1)/2;
        if(tab[akt]<=x)pocz=akt;
        else kon=akt-1;
    }
    if(tab[1]>x)pocz=0;
    return pocz;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>tab[i];
        tab[i]+=tab[i-1];
    }
    for(int i=1;i<=q;i++)cin>>ar[i];
    for(int i=1;i<=q;i++)
    {
        k+=ar[i];
        int blep=binsearch(k);
        if(blep<n)cout<<n-blep<<endl;
        else
        {
            cout<<n<<endl;
            k=0;
        }
    }
	return 0;
}
