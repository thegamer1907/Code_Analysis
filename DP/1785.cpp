#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define pb                  push_back
#define bp                  pop_back
#define pf                  push_front
#define fp                  pop_front
#define pp                  pop_up
#define mp                  make_pair
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
int main()
{
    fast;
    string s;
    cin>>s;
    ll i,ab=0,ba=0,aba=0,bab=0,n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            if(i+1<n && s[i+1]=='B')
            {
                if(i+2<n && s[i+2]=='A')
                {
                    aba++;
                    i+=2;
                }
                else
                    ab++;
            }
        }
        else if(s[i]=='B')
        {
            if(i+1<n && s[i+1]=='A')
            {
                if(i+2<n && s[i+2]=='B')
                {
                    bab++;
                    i+=2;
                }
                else
                    ba++;
            }
        }
    }
    if((ab && ba) || ((aba || bab) && (ab || ba)) || aba+bab>=2)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
