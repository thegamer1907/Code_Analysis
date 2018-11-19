#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    float h;
    float m,s;
    float t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    if(m!=60)
    m+=s/60;
    else if(s!=0)
    m=s/60;

    if(h!=12)
    h+=m/60;
    else if(m!=0)
    h=m/60;
    if((h>t1&&h<t2)||((h>t2&&h<t1)))
    {
        if((m/5>t1&&m/5<t2)||((m/5>t2&&m/5<t1)))
        {
            if((s/5>t1&&s/5<t2)||((s/5>t2&&s/5<t1)))
            {
                cout<<"YES"<<endl;
                exit(0);
            }
        }
    }
    else if((h>t2&&h>t1)||(h<t1&&h<t2))
    {
        if((m/5>t2&&m/5>t1)||(m/5<t1&&m/5<t2))
        {
            if((s/5>t2&&s/5>t1)||(s/5<t1&&s/5<t2))
            {
                cout<<"YES"<<endl;
                exit(0);
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
