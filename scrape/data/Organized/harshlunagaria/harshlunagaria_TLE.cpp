#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>*/
 
#define pll              pair <long long,long long>
#define pb               push_back
#define ll               long long
#define ff               first
#define ss               second
#define D(x)             cerr<<#x " = "<<(x)<<endl
#define vll              vector <ll>
#define IOS              ios_base::sync_with_stdio(0); cin.tie(NULL);
#define endl             '\n'   
using namespace std;
 
 
int main()
{
    IOS
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[m];
    ll step=0;
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    ll page=1;
    ll buk=0;
    ll last=k;
    for(ll i=0;i<m;i++)
    {
        ll val=a[i];                                     //  cout<<val<<" "<<page*k<<endl;           
        if((val)<=last)
        {
            buk++;
        }
        else
        {                             
            last+=buk;
            if(buk!=0)
            step++;                      
            buk=0;                                          
            if((val)<=last)
            {
                buk++;                                   
            }
            else
            {
                buk++;
                if(k>=2)
                {
                    while((val)>last)  
                    {
                    last+=k;                 
                    }
                }
                else
                {
                    last=val;
                }
            }
        }
    }              
    if(buk!=0)
    step++;
    cout<<step<<endl;
    return 0;
}