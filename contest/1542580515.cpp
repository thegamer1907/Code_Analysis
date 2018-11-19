#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
// bo may lai so may qua co
 bool hop[3];
bool lon[2];long h,m,s,t_1,t_2;
bool so( )
{
    hop[0]=hop[1]=hop[2]=false;
    if(h>max(t_1,t_2)||h<min(t_1,t_2)||(h==max(t_1,t_2)&&lon[0]))
        hop[0]=true;
    if(m>max(t_1,t_2)||m<min(t_1,t_2)||(m==max(t_1,t_2)&&lon[1]))
        hop[1]=true;
    if(s>max(t_1,t_2)||s<min(t_1,t_2))
        hop[2]=true;
    if(hop[0]&&hop[1]&&hop[2])
        return true;
    return false;
}
bool kt()
{
    hop[0]=hop[1]=hop[2]=false;
    if((h>min(t_1,t_2)&&h<max(t_1,t_2))||(h==min(t_1,t_2)&&lon[0]&&h<max(t_1,t_2)))
        hop[0]=true;
    if((m>min(t_1,t_2)&&m<max(t_1,t_2))||(m==min(t_1,t_2)&&lon[0]&&m<max(t_1,t_2)))
        hop[1]=true;
    if((s>min(t_1,t_2)&&s<max(t_1,t_2)))
        hop[2]=true;
    if(hop[0]&&hop[1]&&hop[2])
        return true;
    return false;
}
int main()
{

    cin>>h>>m>>s>>t_1>>t_2;
    t_1*=5;
    t_1%=60;
    t_2*=5;
    t_2%=60;
    h*=5;
    h%=60;
    lon[0]=lon[1]=false;
    if(s>0)
    {
        lon[1]=true;
        lon[0]=true;
    }
    else if(m>0)
    {
        lon[0]=true;
    }
    so();
    kt();

    if(so()||kt())
        cout<<"YES";
    else cout<<"NO";


}
