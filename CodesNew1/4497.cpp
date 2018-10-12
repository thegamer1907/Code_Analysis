#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define se second 
#define fi first
#define pb push_back
#define mp make_pair
#define db1(x) cout<<#x<<": "<<x<<"\n";
#define db2(x, y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n";
#define db3(x, y, z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n";
#define db4(a, b, c, d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n";
#define yash_kakarot ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int sacked[500005];
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    vector <int> fii;
    vector <int> see;
    int mid=n/2;

    for(int i=0;i<mid;i++)
    {
        fii.pb(v[i]);
    }
    for(int i=mid;i<n;i++)
    {
        see.pb(v[i]);
    }
    int r=0;
    int ans=n;
    //cout<<see.size()<<"\n";
    for(int i=0;i<fii.size();i++)
    {
        if(r>=see.size())
            break;
        while(1)
        {
            if(see[r]>=2*fii[i])
            {
                r++;
                ans--;
                break;
            }
            else
            {

                r++;
                if(r>=see.size())
                    break;
            }
        }
    }
    cout<<ans;

}