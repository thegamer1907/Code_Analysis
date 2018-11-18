#include<cstdio>
#include<iostream>
using namespace std;
double h,m,s,t1,t2;
double H,M,S,T1,T2;
double TM;
double Tm;

bool f1()
{
    if(S>Tm&&S<TM)return 0;
    if(H>Tm&&H<TM)return 0;
    if(M>Tm&&M<TM)return 0;
    return 1;
}
bool f2()
{
    if(S>=0&&S<Tm)return 0;
    if(H>=0&&H<Tm)return 0;
    if(M>=0&&M<Tm)return 0;
    if(S>TM)return 0;
    if(H>TM)return 0;
    if(M>TM)return 0;
    return 1;
}

int main()
{

    cin>>h>>m>>s>>t1>>t2;

    S=s*6.0;
    M=m*6.0+S/60.0;
    H=(h*30+M/60.0);
    if(H>360)H-=360;
    T1=t1*30;
    T2=t2*30;
    TM=max(T1,T2);
    Tm=min(T1,T2);
    //cout<<H<<" "<<M<<" "<<S<<" "<<TM<<" "<<Tm<<endl;
    if(f1()||f2())
        cout<<"YES";
    else
        cout<<"NO";
}
