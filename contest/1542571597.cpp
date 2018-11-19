#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,a,b,d,x[3],p,q;
    int f=1,cnt=0;
    cin>>h>>m>>s>>a>>b;
    if(h==12) h=0;
    if(a==12) a=0;
    if(b==12) b=0;
    p=max(a,b)*5,q=min(a,b)*5;
    double mn,ho;
    mn=m+(s/60);
    ho=h*5+(mn/12);
//    x[0]=ho;
//    x[1]=mn;
//    x[2]=s;
    //sort(x,x+3);
    //cout<<p<<" "<<q<<endl;
    if(p>s && q<s) cnt++;
    if(p>ho && q<ho) cnt++;
    if(p>mn && q<mn) cnt++;
    //for(int i=0;i<3;i++) if(p>=x[i] && q<=x[i]) cnt++;
    if(cnt==0 ||cnt==3) cout<<"YES";
    else cout<<"NO";
}
