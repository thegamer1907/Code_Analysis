#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define pi pair<int,int>
#define ps pair<int,string>
#define pii pair<int,pair<int,int> >
#define mp make_pair
#define inf 1e9;
#define fori(i) for(i=0;i<n;i++)
const int N=1000000;
int p[1000006]={0};

void print(vector <ll> pr)
{
    cout<<"Printing\n";
     for(int i=0;i<10;i++)
    {
        cout<<pr[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,a,j;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    int ans=n;
    i=n/2-1;
    j=n-1;
    while(i>=0 && j>=n/2)
    {
        if(v[i]*2<=v[j])
        {
            ans--;
            j--;
        }
        if(j)
        i--;
    }
    cout<<ans<<"\n";
    return 0;
}
