#include<bits/stdc++.h>

using namespace std;

int n,k;
int A[300100];
int a[3001000];
int Can(int b);

int main()
{
    cin>>n>>k;

    for(int i=1;i<=n;i++)   scanf("%d",&A[i]),a[i]=A[i]+a[i-1];

    int l=0,r=-1;
    int Max=0;

    for(int i=1;i<=n;i++)
    {
        int c=Can(i);

        if(c>Max)   Max=c,l=i,r=i+c-1;

    }

    cout<<Max<<endl;

    for(int i=1;i<=n;i++)   printf("%d ",( l<=i&&i<=r ? 1 : A[i] ));


}

int Can(int b)
{
    int Start=1;
    int End=n-b+1;

    int Res=0;

    while(Start<=End)
    {
        int Middle=(Start+End)/2;

        if((Middle)-(a[b+Middle-1]-a[b-1])<=k)    Res=Middle,Start=Middle+1;
        else                                      End=Middle-1;

    }

    return Res;

}
