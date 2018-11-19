#include <bits/stdc++.h>
using namespace std;




int main()
{
    double h,m,s,t[2];
    cin>>h>>m>>s>>t[0]>>t[1];
    sort(t,t+2);
    double d2,d3,d1 = s/5.0;

        d2 = (m/5.00)+(d1/60.00);

        d3 = h+(d2/12.0);



    if(d1==0)
    {
        d1= 12;
    }
    else if(d1>12)
        d1-=12;

    if(d2==0)
        d2=12;
    else if(d2>12)
        d2-=12;

    if(d3>12)
        d3-=12;
   // cout<<d1<<" "<<d2<<" "<<d3<<endl;

    int ans =0;
    if((d1<t[0]||d1>t[1])&&(d2<t[0]||d2>t[1])&&(d3<t[0]||d3>t[1]))
        ans = 1;
    if((d1>t[0]&&d1<t[1])&&(d2>t[0]&&d2<t[1])&&(d3>t[0]&&d3<t[1]))
        ans = 1;

    if(ans)
        puts("YES");
    else puts("NO");


}
