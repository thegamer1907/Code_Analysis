#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,p,k,w;
    cin>>n>>p>>m;
    vector<ll>vc;
    w = p;
    ll window = m,del = 0,op = 0;
    while(p--)
    {
        cin>>k;
        vc.push_back(k);
    }
    sort(vc.begin(),vc.end());
    for(int i = 0; i < w; i++)
    {

        if(vc[i]>window)
        {

            if(del!=0)
            {
                op++;
                window+=del;
                del = 0;
            }

            if(del == 0)
            {
                ll dif = vc[i] - window;
                dif+=(m-1);
                dif/=m;
               
                window+=(dif * m);
            }
        }
        if(vc[i]<=window)
            del++;

        // cout<<"window = "<<window<<"op = "<<op<<" del = "<<del<<endl;
    }
    if(del!=0)
        op++;
    cout<<op<<endl;

}