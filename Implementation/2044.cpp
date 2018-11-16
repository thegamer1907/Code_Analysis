#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,sum[101]= {0},cnt,k;
    cin>>m;
    int arr[m][3];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    k = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum[i] = sum[i] + arr[j][i];
        }
        if(sum[i]!=0 && i>0)
        {
            k++;
        }
    }
    if(k==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

