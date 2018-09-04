#include <bits/stdc++.h>

using namespace std;

set<int> s;
set<int>::iterator it1,it2;
int prime[10000001];
int N[10000001];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    //v.resize(664579);
    int n,x,sum=0,m,a,b,l,med,len,L,R,ind=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        N[x]++;
    }

    for(int i=2;i<10000001;i++)
    {
        if(!prime[i])
        {
            sum+=N[i];
            for(int j=i+i;j<10000001;j+=i)
            {
                sum+=N[j];
                prime[j]=-1;
            }
            prime[i]=sum;
            s.insert(i);
        }
    }


//    len=v.size();


    cin>>m;
    while(m--)
    {
        cin>>a>>b;
        it1=s.lower_bound(a);
        it2=s.lower_bound(b);

        if(it1==s.begin())L=0;
        else L=prime[*(--it1)];
        if(*it2!=b)
        {
            if(it2==s.begin())R=0;
            else it2--;
        }
        R=prime[*it2];
        cout<<R-L<<endl;
        /*for(l=0,med=len>>1;med>1;med=(med+1)>>1)
        {
            if(v[l+med].first<=a)
            {
                l+=med;
            }
        }
        if(v[l].first<a)
        {
            l+=med;
        }
        if(v[l].first<a)
        {
            l+=med;
        }
        if(v[l].first<a)
        {
            l+=med;
        }


        L=l;
        for(l=0,med=len>>1;med>1;med=(med+1)>>1)
        {
            if(v[l+med].first<=b)
            {
                l+=med;
            }
        }
        if(v[l+med].first<=b)
        {
            l+=med;
        }
        if(v[l+med].first<=b)
        {
            l+=med;
        }
        if(v[l+med].first<=b)
        {
            l+=med;
        }
        R=l;

        if(L>R)
        {
            cout<<"0\n";
        }
        else cout<<v[R].second-((L!=0)?v[L-1].second:0)<<endl;
        */
    }

    return 0;
}