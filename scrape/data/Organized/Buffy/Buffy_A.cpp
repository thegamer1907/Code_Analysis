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
        ll raz1=0;

        if (kol>0) raz1=raz+1;
        while (j<a.size() && (a[j]+raz1)<=nn)
            {


                raz--;

            j++;
        }
         kol++;
        i=j;


        //raz=0;


    }

    cout<<kol;
}