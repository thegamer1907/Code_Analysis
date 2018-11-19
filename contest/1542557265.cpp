#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,f=0,t=0,M[20][5]={};
    cin >> n >>k;
    if(k==4)
    {
    int A[5][5][5][5]={};
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a==0)and(b==0)) and ((c==0)and (d==0)))
            f++;
        if(A[a][b][c][d]==0)
        {
            A[a][b][c][d]++;
            M[t][0]=a,M[t][1]=b,M[t][2]=c,M[t][3]=d;
            t++;
        }
    }
    }
    else if(k==3)
         {
             int A[5][5][5]={};
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(((a==0)and(b==0))and(c==0))
            f++;
        if(A[a][b][c]==0)
        {
            A[a][b][c]++;
            M[t][0]=a,M[t][1]=b,M[t][2]=c;
            t++;
        }
    }
    }
    else if(k==2)
     {
         int A[5][5]={};
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if((a==0) and (b==0))
            f++;
        if(A[a][b]==0)
        {
            A[a][b]++;
            M[t][0]=a,M[t][1]=b;
            t++;
        }
    }
    }
    else if(k==1)
    {
        int a;
        for(int i=0;i<n;i++)
        {
        cin>>a;
        if(a==0)
            f++;
        }

    }
    int q=0;
    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            for(int p=0;p<k;p++)
            {
                if((M[i][p]+M[j][p])<2)
                    q++;
            }
            if(q==k)
                f++;
            q=0;
        }
    }
    if(f>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
