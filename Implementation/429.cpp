#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *A;
    int n,x,i,c=0;
    cin>>n;
    A=new int(n);
    cin>>x;
    for(i=0;i<n;i++)
        cin>>A[i];
    if(A[0]==0)
        cout<<c;
    else
    {
        for(i=0;i<n;i++)
    {   if(A[i]==0)
    break;
        if(A[i]>=A[x-1])
            c++;
        else
            break;
    }
    cout<<c;
    }
    delete []A;
}
