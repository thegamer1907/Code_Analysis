#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define ins insert
#define sz size
#define cl clear
#define mod 1000000007

using namespace std;

int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    double temp1=t1,temp2=t2;
    t1=min(temp1,temp2);
    t2=max(temp1,temp2);

    h+=m/60+s/3600;
    m+=s/60;

    m=m/5;
    s=s/5;

    if(h>=12) h-=12;
    if(m>=12) m-=12;
    if(s>=12) s-=12;


    if((m>=t1 && m<=t2) || (s>=t1 && s<=t2) || (h>=t1 && h<=t2))
    {
        if((m<=t1 || m>=t2) || (s<=t1 || s>=t2) || (h<=t1 || h>=t2))
           cout<<"NO";
        else
            cout<<"YES";
    }
    else
        cout<<"YES";
}
