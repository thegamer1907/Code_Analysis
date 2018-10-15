#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
vector<long> a;
int main()
{
    long n,k;
    cin>>n>>k;
    a.assign(n,0);
    for(long i=0; i<n; i++)
        cin>>a[i];
    a.push_back(0);
    long d=0,c=0;
    long chot;
    long mx=0;
    for(; c<n;)
    {
        if(a[c]==1)
        {
            c++;
        }
        else
        {
            if(k>0)
            {
                c++;
                k--;
            }
            else
            {
                if(a[d]==0)
                    k++;
                    d++;
                continue;
            }
        }
        if(c-d>mx)
        {
            mx=c-d;
            chot=d;
        }
    }
    for(long i=chot; i<chot+mx; i++)
        a[i]=1;
    cout<<mx<<'\n';
    for(long i=0; i<n; i++)
        cout<<a[i]<<' ';
}
