
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define in insert
#define x first
#define y second
#define inf INT_MAX
int main()
{

    ios::sync_with_stdio(false);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h=h%12;
    t1=t1%12;
    t2=t2%12;
    int mn=min(t1,t2);
    int mx=max(t1,t2);
    int in=0,out=0;

    int t_h=((h*60)+m)*60;
    t_h+=s;
    if(t_h>(mn*3600)&&t_h<(mx*3600))//one equal sign can be costly....
    {
        in++;
    }
    else
    {
        out++;
    }
    int t_m=(m);
    if(t_m>=(mn*5)&&t_m<(mx*5))
    {
        in++;
    }
    else
    {
        out++;
    }
    if(s>=(mn*5)&&s<(mx*5))
    {

        in++;
    }
    else
        out++;
    if(in==3||out==3)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}


