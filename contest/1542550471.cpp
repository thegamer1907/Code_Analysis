#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

struct test{
    string s;
};
int main()
{
    test t[MAX];
    ll n,i,j,flag=0;
    string p,d;
    cin>>p;
    cin>>n;
    j=0;
    for(i=0;i<n;i++)
        {
            cin>>d;
            t[i].s=d;
        }
    //for(i=0;i<j;i++)cout<<t[i].s<<" ";
    for(i=0;i<n;i++)
        {
            if(p==t[i].s) flag=2;
        }
    if(flag==2){ cout<<"Yes"; return 0;}
    else { flag=0; }
    for(i=0;i<n;i++)
        {
            if(t[i].s[1]==p[0])
                {
                     flag++;
                     j=i;
                     break;
                 }
        }
    for(i=0;i<n;i++)
        {
            if(t[i].s[0]==p[1])
                {
                    flag++;
                    goto label;
                }
        }
    label:
    if(flag==2) {cout<<"Yes";}
    else { cout<<"No";}
    return 0;
}
