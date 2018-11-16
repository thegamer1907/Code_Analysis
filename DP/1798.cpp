#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
using namespace std;

// Important header files
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x;
    cin>>x;
    int n=x.length();
    int c1=0,c2=0;
    for(int i=0;i<n-1;i++)
    {
        if(x[i]=='A' && x[i+1]=='B'){c1++;}
        if(x[i]=='B' && x[i+1]=='A'){c2++;}
    }
    if(c1>1 && c2>1)
    {
        cout<<"YES";
    }
    else
    {
        if(c1==0 || c2==0)
        {
            cout<<"NO";
        }
        else
        {
            if(c1==1 && c2==1)
            {int fl=0;
                for(int i=0;i<n-2;i++)
                {
                    if(x[i]=='A' && x[i+1]=='B' && x[i+2]=='A'){fl=1;break;}
                    if(x[i]=='B' && x[i+1]=='A' && x[i+2]=='B'){fl=1;break;}
                }
            if(fl==0){cout<<"YES";}
            else{cout<<"NO";}
            }
            else
            {
                string cm1="ABAB",cm2="BABA";
                if(c1==1 && c2==2)
                {int tfl=0;
                    for(int i=0;i<n-3;i++)
                    {
                        string t=x.substr(i,4);
                        if(t==cm2){cout<<"NO";tfl=1;break;}
                    }
                    if(tfl==0){cout<<"YES";}
                }
                else if(c2==1 && c1==2)
                {
                    int tfl=0;
                    for(int i=0;i<n-3;i++)
                    {
                        string t=x.substr(i,4);
                        if(t==cm1){cout<<"NO";tfl=1;break;}
                    }
                    if(tfl==0){cout<<"YES";}
                }
                else{cout<<"YES";}
            }
        }
    }
}
