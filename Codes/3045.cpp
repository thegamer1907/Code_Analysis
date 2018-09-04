#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
char S[1000001];
int Z[1000001],m;
int R[1000001],nr;
int st,dr,mij,okay;

void calculZ(int m, char S[], int Z[])
{
    int L,R,k,kp,beta;
    Z[1]=0;
    L=R=1;
    for (k=2;k<=m;k++)
        if (S[k]!=S[1])
            Z[k]=0;
        else
            if (k>R)
            {
                Z[k]=1;
                while (S[k+Z[k]]==S[1+Z[k]])
                    Z[k]++;
                L=k;
                R=k+Z[k]-1;
            }
            else
            {
                kp=k-(L-1);
                beta=R-(k-1);
                Z[k]=min(Z[kp],beta);
                while (S[k+Z[k]]==S[1+Z[k]])
                    Z[k]++;
                if (k+Z[k]-1>R)
                {
                    L=k;
                    R=k+Z[k]-1;
                }
            }
}

int main()
{
    cin>>S+1;
    m=strlen(S+1);
    calculZ(m,S,Z);
    nr=0;
    for (int k=m;k>=2;k--)
        if (Z[k]==m-(k-1))
            R[++nr]=Z[k];
    if (nr==0)
    {
        cout<<"Just a legend";
        return 0;
    }
    /// cautare binara a raspunsului
    st=1;
    dr=nr;
    while (st<dr)
    {
        mij=(st+dr+1)/2;
        /// exista valoare mai mare sau egala decat  R[mij] in intervalul de mijloc ?
        okay=0;
        for (int i=2;i<=m-R[mij];i++)
            if (Z[i]>=R[mij])
            {
                okay=1;
                break;
            }
        if (okay==1)
            st=mij;
        else
            dr=mij-1;
    }
    okay=0;
    for (int i=2;i<=m-R[st];i++)
        if (Z[i]>=R[st])
        {
            okay=1;
            break;
        }
    if (okay==1)
        for (int i=1;i<=R[st];i++)
            cout<<S[i];
    else
        cout<<"Just a legend";
    return 0;
}
