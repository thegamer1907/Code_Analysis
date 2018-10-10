#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M=1e14;
char str[109];
int pb,pc,ps,ns,nb,nc;
ll a,b,c,s,bb,ss,cc,vb,vs,vc;
ll l,r,x,y,mid;
int main()
{
    ios::sync_with_stdio(false);
    while(cin>>str)
    {
        s=b=c=0;
        bb=ss=cc=0;
        int len=strlen(str);
         cin>>nb>>ns>>nc;
        cin>>pb>>ps>>pc;
       for(int i=0;i<len;i++)
       {
           if(str[i]=='B')
            b++;
            else if(str[i]=='S')
                s++;
            else
                c++;

       }
       cin>>x;
       l=0;
       r=M;
       while(l<r-1)
       {
           mid=(l+r)>>1;
           bb=max((mid*b-nb),0ll);
           ss=max(mid*s-ns,0ll);
           cc=max(mid*c-nc,0ll);
           if(bb*pb+cc*pc+ss*ps<=x)
            l=mid;
//            else if(bb*pb+cc*pc+ss*ps==x)
//            {
//                l=r=mid;
//                break;
//            }
           else
            r=mid;
           // cout<<l<<"  "<<r<<endl;
       }
       cout<<l<<endl;
    }
}
