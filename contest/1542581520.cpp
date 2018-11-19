#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    double hcal = ((h/12.0) + (m/720.0) + (s/43200.0)) * 12.0;
    double mcal = ((m/60.0) + (s/3600.0)) * 12.0;
    double scal = (s/60.0) * 12.0;

    if(hcal > 12.0) hcal -= 12.0;
    if(mcal > 12.0) mcal -=12.0;
    if(scal > 12.0) scal -= 12.0;

    bool flag1 = false;
    bool flag2 = false;

    if(hcal < max(t1,t2) and hcal > min(t1,t2)) flag1 = true;
    else flag2 = true;

    if(mcal < max(t1,t2) and mcal > min(t1,t2)) flag1 = true;
    else flag2 = true;

    if(scal < max(t1,t2) and scal > min(t1,t2)) flag1 = true;
    else flag2 = true;

    if(flag1 and flag2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}