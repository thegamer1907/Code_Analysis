#include <bits/stdc++.h>

using namespace std;
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
#define Rof(i,a,b) for(int (i)=(a);(i) >= (b); --(i))
#define ll long long

int main()
{
    int n,m;
    cin>>n;
    int boys[n]={};
    For(i,0,n)
        cin>>boys[i];
    cin>>m;
    int girls[m]={};
    For(i,0,m)
        cin>>girls[i];
    sort(boys,boys+n);
    sort(girls,girls+m);
int    c=0;
    For(i,0,n)
    {
        For(j,0,m)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                girls[j]=9999;
                c++;
                break;

            }

        }
    }
    cout<<c;


}
