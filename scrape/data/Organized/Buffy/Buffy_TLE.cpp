//#pragma optimize ("OFast");
#include <bits/stdc++.h>
#define ll int_fast64_t
using namespace std;

int main()
{

    /*freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);*/
    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    ll i,j,n,m,k,kol,r,v;
    vector<ll> a;
    cin>>n>>m>>k;

    for (i=0; i<m; i++)
    {
        ll f;
        cin>>f;
        a.push_back(f);
    }

    i=0;
    ll raz,nn;
    raz=0;
    kol=0;

        while (i<a.size())
    {


        v=a[i]+raz;
        r=v%k;

        if (r!=0) r=1;
        ll block=(v/k+r);
        nn=block*k;

     //   cout<<block<<' '<<nn<<endl;
        raz--;

        j=i+1;
        r=a[j]%k;
        if (r!=0) r=1;
        while (j<a.size() && a[j]<=nn)
            {


                raz--;

            j++;
        }
         kol++;
        i=j;

        for (j=i; j<a.size(); j++)
            a[j]+=raz;

        raz=0;


    }

    cout<<kol;
}