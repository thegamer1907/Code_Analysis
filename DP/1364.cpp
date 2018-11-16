#include<iostream>
#include<queue>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 100001

int Sum(int An[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        if(An[i]==1)
        sum++;
    return sum;
}
int main()
{
    int n,An[101],t=0,Cn[101];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>An[i];
        Cn[i]=An[i];
    }
    for(int i=0; i<n; i++)
    {
        if(An[i]==0)
        {
            t=i;
            break;
        }
    }
    if(An[0]==1 && n==1)
        cout<<0<<endl;
    else
    {

    //cout<<t<<endl;
    int max=0;
    //An[t]=1-An[t];
    //max=Sum(An,n);
    //cout<<"max"<<max<<endl;

    for(int k=t;  k<n; k++)
    {
        if(Cn[k]==0)
        {



        for(int j=0; j<n; j++)
            An[j]=Cn[j];
        for(int i=k; i<n; i++)
    {
        An[i]=1-An[i];
        //cout<<An[i]<<" ";
        if(Sum(An,n) > max)
            max = Sum(An,n);
            //cout<<max<<endl;
    }
        }
    }

    if(max == 0)
    cout<<n-1<<endl;
    else
        cout<<max<<endl;
    }
    return 0;
}


