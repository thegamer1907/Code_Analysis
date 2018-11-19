#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    bool B[13][13]={}; // blocked paths

    for(int i=0; i<13; i++)
        for(int j=0; j<13; j++)
        B[i][j]=1;

    for(int i=1; i<13; i++)
        B[i][(i==12 ? 1 : i+1)] = B[i][(i==1 ? 12 : i-1)]=0;

    if(m==0 && s==0) // if hour is precisely on some number
        B[h][(h==12 ? 1 : h+1)] = B[(h==12 ? 1 : h+1)][h] = B[h][(h==1 ? 12 : h-1)] = B[(h==1 ? 12 : h-1)][h] = 1;
    else
        B[h][(h==12 ? 1 : h+1)] = B[(h==12 ? 1 : h+1)][h]=1;

    if(m%5==0 && s==0) // if minute hand is precisely on some number
        B[(m==0 ? 12 : m/5)][(m==0 ? 1 : m/5+1)] = B[(m==0 ? 1 : m/5+1)][(m==0 ? 12 : m/5)] =
        B[(m==0 ? 1 : m/5+1)][(m==0 ? 11 : m/5==1 ? 12 : m/5-1)]=
        B[(m==0 ? 11 : m/5==1 ? 12 : m/5-1)][(m==0 ? 1 : m/5+1)]=1;
    else
        B[(m < 5 ? 12 : m/5)][(m < 5 ? 1 : m/5+1)] = B[(m < 5 ? 1 : m/5+1)][(m < 5 ? 12 : m/5)]=1;

    if(s%5==0)
        B[(s==0 ? 12 : s/5)][(s==0 ? 1 : s/5+1)] = B[(s==0 ? 1 : s/5+1)][(s==0 ? 12 : s/5)] =
        B[(s==0 ? 1 : s/5+1)][(s==0 ? 11 : s/5==1 ? 12 : s/5-1)]=
        B[(s==0 ? 11 : s/5==1 ? 12 : s/5-1)][(s==0 ? 1 : s/5+1)]=1;
    else
        B[(s < 5 ? 12 : s/5)][(s < 5 ? 1 : s/5+1)] = B[(s < 5 ? 1 : s/5+1)][(s < 5 ? 12 : s/5)]=1;

    for(int k=0; k<13; k++)
        for(int i=0; i<13; i++)
        for(int j=0; j<13; j++)
        if(B[i][k]==0 && B[k][j]==0)
        B[i][j]=0;

    cout<<(B[t1][t2]==0 ? "YES\n" : "NO\n");
}
