#include "iostream"
using namespace std;
int main()
{
    int h,m,s,t1,t2,t;
    double H,M,S;
    cin>>h>>m>>s>>t1>>t2;
    H=h;
    M=0;
    if(s!=0) M=0.5;
    S=s/5;
    if(s%5!=0) S+=0.5;
    if(m!=0||M!=0) H+=0.5;
    if(m%5!=0) M=0.5;
    M+=m/5;
    if(t1>t2) t=t1,t1=t2,t2=t;
    if((H>t1&&H<t2||M>t1&&M<t2||S>t1&&S<t2)&&(H>t1&&H>t2||M>t1&&M>t2||S>t1&&S>t2||H<t1&&H<t2||M<t1&&M<t2||S<t1&&S<t2))
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}